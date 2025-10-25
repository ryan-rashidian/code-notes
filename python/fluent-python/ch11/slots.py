"""Saving memory with __slots__

By default, Python stores the attributes of each class in __dict__,
and a dict has significant memory overhead.

But if you define a class attribute named __slots__, holding attribute names,
Python uses an alternate storage model for the instance attributes.

Attributes named in __slots__ are stored in a hidden array or references.

Ch. 11 (pg. 386)
"""


class MoreMem:
    
    def __init__(self):
        # Instance attributes stored in __dict__
        self.x = 1
        self.y = 2


class LessMem:
    __slots__ = ('x', 'y')

    def __init__(self):
        # Stored in hidden array, has no __dict__
        self.x = 1
        self.y = 2

