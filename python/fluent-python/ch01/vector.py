"""Pg. 10: Emulating Numeric Types"""

import math

class Vector:
    """Class object representing Euclidean vectors.

    Dunder methods implementing + and * operators for class instances.
    """

    def __init__(self, x=0, y=0):
        self.x = x 
        self.y = y

    def __repr__(self):
        """For string representation of objects (for inspection).

        This method also implements !r conversion field
        - part of format string syntax used in fstrings
        - used to get standard representation of attributes

        example with !r conversion:
        >>> print(Vector(3, 'two'))
        Vector(3, 'two')

        example without !r conversion:
        >>> print(Vector(3, 'two'))
        Vector(3, two)
        """
        return f'Vector({self.x!r}, {self.y!r})'

    def __abs__(self):
        """Absolute value of vector magnitude."""
        return math.hypot(self.x, self.y)

    def __bool__(self):
        """Return False if magnitude is zero, True otherwise."""
        return bool(abs(self))

    def __add__(self, other):
        """Allows class instances to be added with + operator.

        example:
        >>> v1 = Vector(3, 4)
        >>> v2 = Vector(2, 5)
        >>> v1 + v2
        Vector(5, 9)
        """
        x = self.x + other.x
        y = self.y + other.y
        return Vector(x, y)

    def __mul__(self, scalar):
        """Allows class instances to be multiplied with * operator.

        example:
        >>> v1 = Vector(2, 3)
        >>> v1 * 3
        Vector(6, 9)
        """
        return Vector(self.x * scalar, self.y * scalar)

