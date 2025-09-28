"""pg. 103 Set Theory"""

def remove_duplicates():
    """One use for sets is removing duplicates from a sequence."""

    l = ['spam', 'spam', 'eggs', 'bacon']
    print(l)
    l = list(set(l))
    print(l)

def needle_keystack():
    """Set operators:

    & --- computes the intersection
    | --- returns the union
    - --- returns the difference
    ^ --- returns the symmetric difference
    """
    needle = {5, 6, 7, 9}
    haystack = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    found = len(needle & haystack)
    # for use with any iterable type:
    # found = len(set(needle) & set(haystack))
    print(found)

    # same results as:

    found = 0
    for n in needle:
        if n in haystack:
            found += 1
    print(found)

def set_comp():
    """pg. 106 Set Comprehensions"""
    from unicodedata import name
    s = {chr(i) for i in range(32, 256) if 'SIGN' in name(chr(i), '')}
    print(s)

