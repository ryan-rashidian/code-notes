"""Pg 5: A Pythonic Card Deck"""

import collections
# collections.namedtuple() used to contruct class representation of cards
# - useful for database records or labeled attributes
Card = collections.namedtuple('Card', ['rank', 'suit'])

class FrenchDeck:
    """Demonstrates implementing __getitem__ and __len__ dunder methods."""
    ranks = [str(n) for n in range(2, 11)] + list('JQKA')
    suits = 'spades diamonds clubs hearts'.split()

    def __init__(self):
        # list comp to create complete deck
        self._cards = [Card(rank, suit) for suit in self.suits 
                                        for rank in self.ranks]
    def __len__(self) -> int:
        """Allows class instances to be used with len() built-in.

        Returns list length of instance variable: self._cards
        """
        return len(self._cards)

    def __getitem__(self, position) -> Card:
        """Allows class instances to be sliced with [] operator.

        __getitem__ delegates to the [] operator of self._cards.

        example:
        >>> deck = FrenchDeck()
        >>> deck[:2]
        [Card(rank='2', suit='spades'), Card(rank='3', suit='spades')]

        """
        return self._cards[position]

"""Pg 10: Emulating Numeric Types"""

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

