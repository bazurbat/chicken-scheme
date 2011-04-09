/* embedded3-c.c */
 
#include <chicken.h>
#include <assert.h>
 
extern double baz(int);
 
int main() {
  char buffer[ 256 ];
  int status;
  C_word val = C_SCHEME_UNDEFINED;
  C_word *data[ 1 ];
 
  data[ 0 ] = &val;
 
  CHICKEN_run(C_toplevel);
 
  status = CHICKEN_read("(bar 99)", &val);
  assert(status);
 
  C_gc_protect(data, 1);
 
  printf("data: %08x\n", val);
 
  status = CHICKEN_eval_string_to_string("(bar)", buffer, 255);
  assert(!status);
 
  CHICKEN_get_error_message(buffer, 255);
  printf("ouch (expected): %s\n", buffer);
 
  status = CHICKEN_eval_string_to_string("(bar 23)", buffer, 255);
  assert(status);
 
  printf("-> %s\n", buffer);
  printf("data: %08x\n", val);
 
  status = CHICKEN_eval_to_string(val, buffer, 255);
  assert(status);
  printf("-> %s\n", buffer);
 
  printf("-> %g\n", baz(22));
 
  return 0;
}
