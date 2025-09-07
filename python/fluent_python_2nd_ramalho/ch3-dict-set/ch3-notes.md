# Chapter 3: Dictionaries and Sets

## Dictionaries:

- Keys must be hashable objects.
- Items accessed by keys are fast. A dict may have millions of keys, but Python can locate a key directly by computing the hash code of the key and deriving an index.
- Key ordering is preserved as a side effect of compact memory layout.
- To save memory, avoid creating instance attributes outside of the `__init__` method.

## Sets:

- There is no literal notation for the empty set, so remember to use `set()`. `{}` will refer to an empty dictionary
- Literal set syntax (such as `{1, 2, 3}`) is faster than calling the constructor (`set([1, 2, 3])`). This is because Python must first look up the set name to fetch the constructor, then build a list, and finally pass it to the constructor.
- frozenset literals must be created by calling the constructor (e.g. `frozenset(range(10))`)
- set and frozenset are both implemented with a hash table.
- set elements must be hashable objects. They must implement proper `__hash__` and `__eq__` methods (pg. 84). 
- Membership testing is very efficient.
- Significant memory overhead for fast search speeds (when compared to low-level array pointers).
- Element ordering depends on insertion order, but not in a useful or reliable way due to hash collisions.
- Adding elements to sets may change the order of existing elements. This is caused by Python re-sizing the hash table when it becomes too full (more than 2/3 full).

