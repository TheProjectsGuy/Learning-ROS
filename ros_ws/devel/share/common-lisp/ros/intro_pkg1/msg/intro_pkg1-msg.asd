
(cl:in-package :asdf)

(defsystem "intro_pkg1-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Equ" :depends-on ("_package_Equ"))
    (:file "_package_Equ" :depends-on ("_package"))
  ))