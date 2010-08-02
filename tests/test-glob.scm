;;;; test-glob.scm - test glob-pattern -> regex translation


(use regex)

(assert (string-match (glob->regexp "foo.bar") "foo.bar"))
(assert (string-match (glob->regexp "foo*") "foo.bar"))
(assert (string-match (glob->regexp "foo/*") "foo/bar"))
(assert (not (string-match (glob->regexp "foo/*") "foo/bar/baz")))
(assert (string-match (glob->regexp "foo/*/*") "foo/bar/baz"))
(assert (not (string-match (glob->regexp "foo/*") "foo/.bar")))
(assert (string-match (glob->regexp "*foo") "xyzfoo"))
(assert (not (string-match (glob->regexp "*foo") ".foo")))
(assert (not (string-match (glob->regexp "*foo*") "a.fooxxx/yyy")))
(assert (string-match (glob->regexp "*foo*") "fooxxx"))
(assert (string-match (glob->regexp "main.[ch]") "main.c"))
(assert (string-match (glob->regexp "main.[ch]") "main.h"))
(assert (not (string-match (glob->regexp "main.[ch]") "main.cpp")))
(assert (string-match (glob->regexp "main.[-c]") "main.h"))
(assert (not (string-match (glob->regexp "main.[-h]") "main.h")))
