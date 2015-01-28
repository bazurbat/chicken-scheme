;;;; module re-exporting from core module

(module reexport-m1 ()
  (import scheme chicken)
  (require-library srfi-4)
  (reexport (only srfi-4 u8vector)))
