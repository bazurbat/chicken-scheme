(use posix)
(include "test.scm")

(handle-exceptions exn
  'ignore
  (delete-directory "find-files-test-dir" #t))

(for-each (lambda (d)
            (create-directory d #t))
          '("find-files-test-dir/foo/bar/baz/.quux"
            "find-files-test-dir/dir-link-target"
            "find-files-test-dir/foo/.x"))

(for-each (lambda (f)
            (with-output-to-file f (cut display "")))
          '("find-files-test-dir/file1"
            "find-files-test-dir/file2"
            "find-files-test-dir/dir-link-target/foo"
            "find-files-test-dir/dir-link-target/bar"))

(change-directory "find-files-test-dir")

(create-symbolic-link "dir-link-target" "dir-link-name")

(test-begin "find-files")

(test-equal "no keyword args"
            (find-files ".")
            '("./foo/bar/baz"
              "./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name"
              "./file2"))

(test-equal "dotfiles: #t"
            (find-files "." dotfiles: #t)
            '("./foo/bar/baz/.quux"
              "./foo/bar/baz"
              "./foo/bar"
              "./foo/.x"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name"
              "./file2"))

(test-equal "follow-symlinks: #t"
            (find-files "." follow-symlinks: #t)
            '("./foo/bar/baz"
              "./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name/foo"
              "./dir-link-name/bar"
              "./dir-link-name"
              "./file2"))

(test-equal "limit: 1"
            (find-files "." limit: 1)
            '("./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name"
              "./file2"))

(test-equal "limit: 1 follow-symlinks: #t"
            (find-files "." limit: 1 follow-symlinks: #t)
            '("./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name/foo"
              "./dir-link-name/bar"
              "./dir-link-name"
              "./file2"))

(test-equal "limit: 2"
            (find-files "." limit: 2)
            '("./foo/bar/baz"
              "./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name"
              "./file2"))

(test-equal "limit: 2 follow-symlinks: #t"
            (find-files "." limit: 2 follow-symlinks: #t)
            '("./foo/bar/baz"
              "./foo/bar"
              "./foo"
              "./dir-link-target/foo"
              "./dir-link-target/bar"
              "./dir-link-target"
              "./file1"
              "./dir-link-name/foo"
              "./dir-link-name/bar"
              "./dir-link-name"
              "./file2"))

(test-equal "test: (lambda (f) (directory? f))"
            (find-files "." test: (lambda (f) (directory? f)))
            '("./foo/bar/baz"
              "./foo/bar"
              "./foo"
              "./dir-link-target"
              "./dir-link-name"))

(test-equal "test: (lambda (f) (directory? f)) action: (lambda (f p) (cons (string-append \"--\" f) p))"
            (find-files "."
                        test: (lambda (f) (directory? f))
                        action: (lambda (f p) (cons (string-append "--" f) p)))
            '("--./foo/bar/baz"
              "--./foo/bar"
              "--./foo"
              "--./dir-link-target"
              "--./dir-link-name"))

(test-equal "dotfiles: #t test: (lambda (f) (directory? f)) follow-symlinks: #t"
            (find-files "." dotfiles: #t test: (lambda (f) (directory? f)) follow-symlinks: #t)
            '("./foo/bar/baz/.quux"
              "./foo/bar/baz"
              "./foo/bar"
              "./foo/.x"
              "./foo"
              "./dir-link-target"
              "./dir-link-name"))

(test-equal "dotfiles: #t test: (lambda (f) (directory? f)) follow-symlinks: #t limit: 1"
            (find-files "."
                        dotfiles: #t
                        test: (lambda (f) (directory? f))
                        follow-symlinks: #t
                        limit: 1)
            '("./foo/bar"
              "./foo/.x"
              "./foo"
              "./dir-link-target"
              "./dir-link-name"))

(test-end "find-files")

(change-directory "..")
(delete-directory "find-files-test-dir" #t)
