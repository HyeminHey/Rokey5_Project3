# generated from rosidl_generator_py/resource/_idl.py.em
# with input from qulido_robot_msgs:srv/AiCompute.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'added'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AiCompute_Request(type):
    """Metaclass of message 'AiCompute_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('qulido_robot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qulido_robot_msgs.srv.AiCompute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ai_compute__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ai_compute__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ai_compute__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ai_compute__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ai_compute__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AiCompute_Request(metaclass=Metaclass_AiCompute_Request):
    """Message class 'AiCompute_Request'."""

    __slots__ = [
        '_added',
    ]

    _fields_and_field_types = {
        'added': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.added = array.array('i', kwargs.get('added', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.added != other.added:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def added(self):
        """Message field 'added'."""
        return self._added

    @added.setter
    def added(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'added' array.array() must have the type code of 'i'"
            self._added = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'added' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._added = array.array('i', value)


# Import statements for member types

# Member 'ai_cmd'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AiCompute_Response(type):
    """Metaclass of message 'AiCompute_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('qulido_robot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qulido_robot_msgs.srv.AiCompute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ai_compute__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ai_compute__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ai_compute__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ai_compute__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ai_compute__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AiCompute_Response(metaclass=Metaclass_AiCompute_Response):
    """Message class 'AiCompute_Response'."""

    __slots__ = [
        '_ai_cmd',
    ]

    _fields_and_field_types = {
        'ai_cmd': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ai_cmd = array.array('i', kwargs.get('ai_cmd', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ai_cmd != other.ai_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ai_cmd(self):
        """Message field 'ai_cmd'."""
        return self._ai_cmd

    @ai_cmd.setter
    def ai_cmd(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'ai_cmd' array.array() must have the type code of 'i'"
            self._ai_cmd = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'ai_cmd' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._ai_cmd = array.array('i', value)


class Metaclass_AiCompute(type):
    """Metaclass of service 'AiCompute'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('qulido_robot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qulido_robot_msgs.srv.AiCompute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ai_compute

            from qulido_robot_msgs.srv import _ai_compute
            if _ai_compute.Metaclass_AiCompute_Request._TYPE_SUPPORT is None:
                _ai_compute.Metaclass_AiCompute_Request.__import_type_support__()
            if _ai_compute.Metaclass_AiCompute_Response._TYPE_SUPPORT is None:
                _ai_compute.Metaclass_AiCompute_Response.__import_type_support__()


class AiCompute(metaclass=Metaclass_AiCompute):
    from qulido_robot_msgs.srv._ai_compute import AiCompute_Request as Request
    from qulido_robot_msgs.srv._ai_compute import AiCompute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
