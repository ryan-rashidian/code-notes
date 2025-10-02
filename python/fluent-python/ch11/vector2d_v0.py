"""Vector 2d special methods."""

from array import array
import math


class Vector2d:
    # attribute used when converting Vector2d instances to/from bytes
    typecode = 'd'

    def __init__(self, x, y):
        # catch unsuitable args
        self.x = float(x)
        self.y = float(y)

    # makes Vector2d iterable, unpacking now works
    def __iter__(self):
        return (i for i in (self.x, self.y))

    # *self unpacks x and y components for string
    def __repr__(self):
        class_name = type(self).__name__
        return '{}({!r}, {!r})'.format(class_name, *self)

    # build tuple from iterable self
    def __str__(self):
        return str(tuple(self))

    def __bytes__(self):
        # convert typecode to bytes and concatenate
        # bytes converted from array built by iterating over the instance
        return (bytes([ord(self.typecode)]) +
                bytes(array(self.typecode, self)))

    def __eq__(self, other):
        return tuple(self) == tuple(other)

    def __abs__(self):
        return math.hypot(self.x, self.y)

    def __bool__(self):
        return bool(abs(self))

