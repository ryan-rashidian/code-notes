"""pg. 39 Pattern Matching with Sequences"""

def pattern_match():
    """Demonstration of pattern matching."""
    products_sold = [
        ('soda', 1.99, 17, ('03-16-25', '03-23-25')),
        ('lemonade', 1.49, 12, ('03-22-25', '03-23-25')),
        ('coffee', 1.75, 15, ('03-20-25', '03-23-25')),
    ]
    print(f'{"":15} | {"stocked":>9} | {"sold":>9} | {"#":>5}')
    for line in products_sold:
        # line is the 'subject' of the match
        match line:
            # case clause has two parts:
            # 1. a pattern | 2. an optional guard with if keyword
            # 'as' keyword can bind any part of a pattern
            case [
                name, _, quantity, (stocked, sold) as dates
            ] if quantity >= 15:
                print(f'{name:15} | {stocked:>9} | {sold:>9} | {quantity:>5}')
                print(dates) 

"""Tip: In the context of match/case:

Instances of str, bytes, and bytearray are not handles as sequences.
A match subject of those types is treated as an atomic value.

In order to treat those types as sequence objects,
convert them in the match clause:

match tuple(example_str_clause):
"""

def pattern_match_type():
    """Demonstration of pattern matching with type info."""
    products_sold = [
        ('soda', 1.99, 17, ('03-16-25', '03-23-25')),
        ('lemonade', 1.49, 12, ('03-22-25', '03-23-25')),
        ('coffee', 1.75, 15, ('03-20-25', '03-23-25')),
    ]
    print(f'{"":15} | {"stocked":>9} | {"sold":>9}')
    for line in products_sold:
        match line:
            case [str(name), _, 12, (str(stocked), str(sold))]:
                print(f'{name:15} | {stocked:>9} | {sold:>9}')
            case _:
                print('no match')

