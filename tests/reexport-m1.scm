;;;; module re-exporting from core module

(module reexport-m1 ()
  (import scheme chicken)
  (require-library srfi-1 srfi-13)
  (reexport (only srfi-1 cons*) srfi-13))
