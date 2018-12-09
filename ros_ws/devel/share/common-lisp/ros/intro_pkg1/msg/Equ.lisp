; Auto-generated. Do not edit!


(cl:in-package intro_pkg1-msg)


;//! \htmlinclude Equ.msg.html

(cl:defclass <Equ> (roslisp-msg-protocol:ros-message)
  ((info
    :reader info
    :initarg :info
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type cl:float
    :initform 0.0))
)

(cl:defclass Equ (<Equ>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Equ>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Equ)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name intro_pkg1-msg:<Equ> is deprecated: use intro_pkg1-msg:Equ instead.")))

(cl:ensure-generic-function 'info-val :lambda-list '(m))
(cl:defmethod info-val ((m <Equ>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader intro_pkg1-msg:info-val is deprecated.  Use intro_pkg1-msg:info instead.")
  (info m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <Equ>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader intro_pkg1-msg:value-val is deprecated.  Use intro_pkg1-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Equ>) ostream)
  "Serializes a message object of type '<Equ>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'info))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'info))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Equ>) istream)
  "Deserializes a message object of type '<Equ>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'info) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'info) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Equ>)))
  "Returns string type for a message object of type '<Equ>"
  "intro_pkg1/Equ")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Equ)))
  "Returns string type for a message object of type 'Equ"
  "intro_pkg1/Equ")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Equ>)))
  "Returns md5sum for a message object of type '<Equ>"
  "cbbb65bba7b391acb2e0a0d07ce1c8e4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Equ)))
  "Returns md5sum for a message object of type 'Equ"
  "cbbb65bba7b391acb2e0a0d07ce1c8e4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Equ>)))
  "Returns full string definition for message of type '<Equ>"
  (cl:format cl:nil "# Information~%string info~%# Floating point value~%float64 value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Equ)))
  "Returns full string definition for message of type 'Equ"
  (cl:format cl:nil "# Information~%string info~%# Floating point value~%float64 value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Equ>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'info))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Equ>))
  "Converts a ROS message object to a list"
  (cl:list 'Equ
    (cl:cons ':info (info msg))
    (cl:cons ':value (value msg))
))
