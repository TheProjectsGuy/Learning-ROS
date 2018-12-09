;; Auto-generated. Do not edit!


(when (boundp 'intro_pkg1::Equ)
  (if (not (find-package "INTRO_PKG1"))
    (make-package "INTRO_PKG1"))
  (shadow 'Equ (find-package "INTRO_PKG1")))
(unless (find-package "INTRO_PKG1::EQU")
  (make-package "INTRO_PKG1::EQU"))

(in-package "ROS")
;;//! \htmlinclude Equ.msg.html


(defclass intro_pkg1::Equ
  :super ros::object
  :slots (_info _value ))

(defmethod intro_pkg1::Equ
  (:init
   (&key
    ((:info __info) "")
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _info (string __info))
   (setq _value (float __value))
   self)
  (:info
   (&optional __info)
   (if __info (setq _info __info)) _info)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _info
    4 (length _info)
    ;; float64 _value
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _info
       (write-long (length _info) s) (princ _info s)
     ;; float64 _value
       (sys::poke _value (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _info
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _info (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64 _value
     (setq _value (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get intro_pkg1::Equ :md5sum-) "cbbb65bba7b391acb2e0a0d07ce1c8e4")
(setf (get intro_pkg1::Equ :datatype-) "intro_pkg1/Equ")
(setf (get intro_pkg1::Equ :definition-)
      "# Information
string info
# Floating point value
float64 value
")



(provide :intro_pkg1/Equ "cbbb65bba7b391acb2e0a0d07ce1c8e4")


