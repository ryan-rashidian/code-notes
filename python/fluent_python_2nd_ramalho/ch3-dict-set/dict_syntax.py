"""pg. 78 Modern dict Syntax"""

def dict_comp():
    """pg. 79 dict Comprehensions"""
    dial_codes = {
        (880, 'Bangladesh'),
        (86, 'China'),
        (81, 'Japan'),
        (7, 'Russia'),
        (1, 'United States'),
    }
    country_dial = {country: code for code, country in dial_codes}
    print(country_dial)
    country_dial_fmt = {
        code: country.upper()
        for country, code in sorted(country_dial.items())
        if code < 70
    }
    print(country_dial_fmt)

def unpacking_mappings():
    """pg. 80 Unpacking Mappings"""
    def dump(**kwargs):
        print(kwargs)
    dump(**{'x': 1}, y=2, **{'z': 3})

def merging_mappings():
    """pg. 80 Merging Mappings with | 

    | operator creates a new mapping
    |= update existing mapping
    """
    d1 = {'a': 1, 'b': 3}
    d2 = {'a': 2, 'b': 4, 'c': 6}
    print(d1 | d2)
    print(d1)
    print(d2)
    d1 |= d2
    print(d1)

