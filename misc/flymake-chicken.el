;;;; flymake for CHICKEN

;; Taken from:
;; https://github.com/sroccaserra/emacs/blob/master/flymake-lua.el

;;
;; Flymake for Lua
;;
;; Usage:
;; (require 'flymake-lua)
;; (add-hook 'lua-mode-hook 'flymake-lua-load)
;;
;; Note: litterally stolen from Steve Purcell's Flymake Ruby.
;; See http://github.com/purcell/emacs.d/blob/master/site-lisp/flymake-ruby/flymake-ruby.el
;;

(require 'flymake)

(defgroup flymake-chicken nil
  "Flymake Chicken Customizations")

(defcustom flymake-chicken-program "chicken-flymake"
  "How to invoke csc."
  :type 'file
  :group 'flymake-chicken)

(defun flymake-create-temp-in-system-tempdir (filename prefix)
  (make-temp-file (or prefix "flymake-chicken")))

(defun flymake-chicken-init ()
  (list flymake-chicken-program
        (list (flymake-init-create-temp-buffer-copy
	       'flymake-create-temp-in-system-tempdir))))

(defvar flymake-chicken-allowed-file-name-masks
  '(("\\.scm\\'" flymake-chicken-init)))

(defvar flymake-chicken-err-line-patterns
  '((" *(\\(.+\\):\\([0-9]+\\)) *"
     1 2)
    ("\\(Error\\|Warning\\|Note\\): *(line \\([0-9.]*\\))"
     nil 2)))
	
;(defvar flymake-lua-err-line-patterns
;  '(("^.*luac[0-9.]*\\(.exe\\)?: *\\(.*\\):\\([0-9]+\\): \\(.*\\)$"
;	 2 3 nil 4)))

;;;###autoload
(defun flymake-chicken-mode ()
  (interactive)
  (when (and (not (null buffer-file-name)) (file-writable-p buffer-file-name))
    (set (make-local-variable 'flymake-allowed-file-name-masks) flymake-chicken-allowed-file-name-masks)
    (set (make-local-variable 'flymake-err-line-patterns) flymake-chicken-err-line-patterns)
    (flymake-mode t)))

(provide 'flymake-chicken)
