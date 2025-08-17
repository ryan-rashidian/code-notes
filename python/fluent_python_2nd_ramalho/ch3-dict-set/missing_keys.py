"""pg. 90 Automatic Handling of Missing Keys"""

from collections import defaultdict

def missing_key_defaultdict():
    """pg. 90 defaultdict: Another Take on Missing Keys

    collections.defaultdict instance creates items with a default value,
    whenever a missing key is searched using d[k] syntax.
    """
    counts = defaultdict(int)

    print(counts['apples'])
    counts['apples'] += 2
    print(counts['apples'])
    print(counts['oranges'])
    print(counts)

class StrKeyDict0(dict):
    # StrKeyDict0 inherits from dict
    """pg. 91 The __missing__ Method

    if __missing__ method is provided, dict.__getitem__ will call it,
    whenever a key is not found.
    """
    def __missing__(self, key):
        if isinstance(key, str):
            # check if key is already a str
            raise KeyError(key)
        # build str from key and look it up
        return self[str(key)]
    
    def get(self, key, default=None):
        try:
            # get method delegates __getitem__ using self[k] notation
            return self[key]
        except KeyError:
            # if KeyError was raised, __missing__ already failed
            # return the default
            return default

    def __contains__(self, key):
        # search for unmodified keys, then for a str built from the key
        return key in self.keys() or str(key) in self.keys()

def missing_key_test():
    d = StrKeyDict0([('2', 'two'), ('4', 'four')])
    print(d['2'])
    print(d['4'])
    try:
        print(d['1'])
    except KeyError as e:
        print(e)

    print(d.get('2'))
    print(d.get(4))
    print(d.get(1))

