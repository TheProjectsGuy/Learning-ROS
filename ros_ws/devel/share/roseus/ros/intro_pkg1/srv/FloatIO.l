;; Auto-generated. Do not edit!


(when (boundp 'intro_pkg1::FloatIO)
  (if (not (find-package "INTRO_PKG1"))
    (make-package "INTRO_PKG1"))
  (shadow 'FloatIO (find-package "INTRO_PKG1")))
(unless (find-package "INTRO_PKG1::FLOATIO")
  (make-package "INTRO_PKG1::FLOATIO"))
(unless (find-package "INTRO_PKG1::FLOATIOREQUEST")
  (make-package "INTRO_PKG1::FLOATIOREQUEST"))
(unless (find-package "INTRO_PKG1::FLOATIORESPONSE")
  (make-package "INTRO_PKG1::FLOATIORESPONSE"))

(in-package "ROS")





(defclass intro_pkg1::FloatIORequest
  :super ros::object
  :slots (_input ))

(defmethod intro_pkg1::FloatIORequest
  (:init
   (&key
    ((:input __input) 0.0)
    )
   (send-super :init)
   (setq _input (float __input))
   self)
  (:input
   (&optional __input)
   (if __input (setq _input __input)) _input)
  (:serialization-length
   ()
   (+
    ;; float64 _input
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _input
       (sys::poke _input (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _input
     (setq _input (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass intro_pkg1::FloatIOResponse
  :super ros::object
  :slots (_output ))

(defmethod intro_pkg1::FloatIOResponse
  (:init
   (&key
    ((:output __output) 0.0)
    )
   (send-super :init)
   (setq _output (float __output))
   self)
  (:output
   (&optional __output)
   (if __output (setq _output __output)) _output)
  (:serialization-length
   ()
   (+
    ;; float64 _output
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _output
       (sys::poke _output (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _output
     (setq _output (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass intro_pkg1::FloatIO
  :super ros::object
  :slots ())

(setf (get intro_pkg1::FloatIO :md5sum-) "6c59364dede48a4429627e3e0efa7049")
(setf (get intro_pkg1::FloatIO :datatype-) "intro_pkg1/FloatIO")
(setf (get intro_pkg1::FloatIO :request) intro_pkg1::FloatIORequest)
(setf (get intro_pkg1::FloatIO :response) intro_pkg1::FloatIOResponse)

(defmethod intro_pkg1::FloatIORequest
  (:response () (instance intro_pkg1::FloatIOResponse :init)))

(setf (get intro_pkg1::FloatIORequest :md5sum-) "6c59364dede48a4429627e3e0efa7049")
(setf (get intro_pkg1::FloatIORequest :datatype-) "intro_pkg1/FloatIORequest")
(setf (get intro_pkg1::FloatIORequest :definition-)
      "
float64 input
---

float64 output
")

(setf (get intro_pkg1::FloatIOResponse :md5sum-) "6c59364dede48a4429627e3e0efa7049")
(setf (get intro_pkg1::FloatIOResponse :datatype-) "intro_pkg1/FloatIOResponse")
(setf (get intro_pkg1::FloatIOResponse :definition-)
      "
float64 input
---

float64 output
")



(provide :intro_pkg1/FloatIO "6c59364dede48a4429627e3e0efa7049")


