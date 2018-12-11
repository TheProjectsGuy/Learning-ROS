
(cl:in-package :asdf)

(defsystem "intro_pkg1-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "FloatIO" :depends-on ("_package_FloatIO"))
    (:file "_package_FloatIO" :depends-on ("_package"))
  ))