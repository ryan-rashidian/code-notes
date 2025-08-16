"""pg. 81 Pattern Matching with Mappings

match/case supports subjects that are mapping objects.
"""

from collections import OrderedDict

def get_record(record: dict) -> list:
    """Demonstration of pattern matching with mappings."""
    match record:
        case {'type': 'book', 'api': 2, 'authors': [*names]}:
            return names
        case {'type': 'book', 'api': 1, 'author': name}:
            return [name]
        case {'type': 'book'}:
            raise ValueError(f"Invalid 'book' record: {record!r}")
        case {'type': 'movie', 'director': name}:
            return [name]
        case _:
            raise ValueError(f'Invalid record: {record!r}')

b1 = dict(
    api = 1,
    author = 'Douglas Hofstadter',
    type = 'book',
    title = 'Godel, Escher, Bach'
)
b2 = OrderedDict(
    api = 2,
    type = 'book',
    title = 'Python in a Nutshell',
    authors = 'Martelli Ravencroft Holden'.split()
)

print(get_record(b1))
print(get_record(b2))

