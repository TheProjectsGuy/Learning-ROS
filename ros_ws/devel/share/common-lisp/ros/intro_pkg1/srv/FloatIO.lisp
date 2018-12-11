; Auto-generated. Do not edit!


(cl:in-package intro_pkg1-srv)


;//! \htmlinclude FloatIO-request.msg.html

(cl:defclass <FloatIO-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type cl:float
    :initform 0.0))
)

(cl:defclass FloatIO-request (<FloatIO-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FloatIO-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FloatIO-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name intro_pkg1-srv:<FloatIO-request> is deprecated: use intro_pkg1-srv:FloatIO-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <FloatIO-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader intro_pkg1-srv:input-val is deprecated.  Use intro_pkg1-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FloatIO-request>) ostream)
  "Serializes a message object of type '<FloatIO-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'input))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FloatIO-request>) istream)
  "Deserializes a message object of type '<FloatIO-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'input) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FloatIO-request>)))
  "Returns string type for a service object of type '<FloatIO-request>"
  "intro_pkg1/FloatIORequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FloatIO-request)))
  "Returns string type for a service object of type 'FloatIO-request"
  "intro_pkg1/FloatIORequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FloatIO-request>)))
  "Returns md5sum for a message object of type '<FloatIO-request>"
  "6c59364dede48a4429627e3e0efa7049")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FloatIO-request)))
  "Returns md5sum for a message object of type 'FloatIO-request"
  "6c59364dede48a4429627e3e0efa7049")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FloatIO-request>)))
  "Returns full string definition for message of type '<FloatIO-request>"
  (cl:format cl:nil "~%float64 input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FloatIO-request)))
  "Returns full string definition for message of type 'FloatIO-request"
  (cl:format cl:nil "~%float64 input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FloatIO-request>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FloatIO-request>))
  "Converts a ROS message object to a list"
  (cl:list 'FloatIO-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude FloatIO-response.msg.html

(cl:defclass <FloatIO-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type cl:float
    :initform 0.0))
)

(cl:defclass FloatIO-response (<FloatIO-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FloatIO-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FloatIO-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name intro_pkg1-srv:<FloatIO-response> is deprecated: use intro_pkg1-srv:FloatIO-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <FloatIO-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader intro_pkg1-srv:output-val is deprecated.  Use intro_pkg1-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FloatIO-response>) ostream)
  "Serializes a message object of type '<FloatIO-response>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'output))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FloatIO-response>) istream)
  "Deserializes a message object of type '<FloatIO-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'output) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FloatIO-response>)))
  "Returns string type for a service object of type '<FloatIO-response>"
  "intro_pkg1/FloatIOResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FloatIO-response)))
  "Returns string type for a service object of type 'FloatIO-response"
  "intro_pkg1/FloatIOResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FloatIO-response>)))
  "Returns md5sum for a message object of type '<FloatIO-response>"
  "6c59364dede48a4429627e3e0efa7049")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FloatIO-response)))
  "Returns md5sum for a message object of type 'FloatIO-response"
  "6c59364dede48a4429627e3e0efa7049")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FloatIO-response>)))
  "Returns full string definition for message of type '<FloatIO-response>"
  (cl:format cl:nil "~%float64 output~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FloatIO-response)))
  "Returns full string definition for message of type 'FloatIO-response"
  (cl:format cl:nil "~%float64 output~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FloatIO-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FloatIO-response>))
  "Converts a ROS message object to a list"
  (cl:list 'FloatIO-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'FloatIO)))
  'FloatIO-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'FloatIO)))
  'FloatIO-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FloatIO)))
  "Returns string type for a service object of type '<FloatIO>"
  "intro_pkg1/FloatIO")