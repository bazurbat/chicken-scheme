(module reexport-m1 ()
  (import scheme chicken)
  (require-library srfi-1)
  (reexport (only srfi-1 cons*)))
