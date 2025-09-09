"""pg. 83 Standard API of Mapping Types"""

from collections import abc

def abc_example():
    """collections.abc module provides Mapping and MutableMapping"""
    my_dict = {}
    print(isinstance(my_dict, abc.Mapping))
    print(isinstance(my_dict, abc.MutableMapping))

def hash_example():
    """pg. 84 What is Hashable

    Numeric types and flat immutable types (str and bytes) are all hashable.
    Container types are hashable if they are immutable,
    and all contained objects are also hashable.

    An object is hashable if it has a hash code that never changes.
        - It needs a __hash__() and __eq__() method
    """
    tt = (1, 2, (30, 40))
    print(hash(tt))
    tl = (1, 2, [30, 40])
    try:
        print(hash(tl))
    except TypeError as e:
        print(e)
    tf = (1, 2, frozenset([30, 40]))
    print(hash(tf))

