;;;; test-glob.scm - test glob-pattern -> regex translation


(use irregex)

(assert (irregex-match (##sys#glob->regexp "foo.bar") "foo.bar"))
(assert (irregex-match (##sys#glob->regexp "foo*") "foo.bar"))
(assert (irregex-match (##sys#glob->regexp "foo/*") "foo/bar"))
(assert (not (irregex-match (##sys#glob->regexp "foo/*") "foo/bar/baz")))
(assert (irregex-match (##sys#glob->regexp "foo/*/*") "foo/bar/baz"))
(assert (not (irregex-match (##sys#glob->regexp "foo/*") "foo/.bar")))
(assert (irregex-match (##sys#glob->regexp "*foo") "xyzfoo"))
(assert (not (irregex-match (##sys#glob->regexp "*foo") ".foo")))
(assert (not (irregex-match (##sys#glob->regexp "*foo*") "a.fooxxx/yyy")))
(assert (irregex-match (##sys#glob->regexp "*foo*") "fooxxx"))
(assert (irregex-match (##sys#glob->regexp "main.[ch]") "main.c"))
(assert (irregex-match (##sys#glob->regexp "main.[ch]") "main.h"))
(assert (not (irregex-match (##sys#glob->regexp "main.[ch]") "main.cpp")))
(assert (irregex-match (##sys#glob->regexp "main.[-c]") "main.h"))
(assert (not (irregex-match (##sys#glob->regexp "main.[-h]") "main.h")))
