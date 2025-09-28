"""pg. 5: A Pythonic Card Deck"""

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
