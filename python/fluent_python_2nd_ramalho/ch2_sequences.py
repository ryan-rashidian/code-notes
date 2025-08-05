"""Chapter 2: An Array of Sequences

Container sequences:
    - can hold items of different types, including nested containers
    - examples: list, tuple, collections.deque

Flat sequences:
    - holds items of one simple type
    - examples: str, byte, array.array

See figure 2-1 (pg. 23) for diagram of container sequence memory storage.
"""

"""pg. 5 List Comprehensions and Generator Expressions"""

def listcomp():
    """Demonstration of listcomp on flat sequence."""
    symbols = '$&%@#'
    codes = [ord(symbol) for symbol in symbols]
    print(codes) # [36, 38, 37, 64, 35]

def listcomp_scope():
    """Demonstration of local scope in comps and genexps."""
    x = 'ABC'
    codes = [ord(x) for x in x]
    # x is still bound to 'ABC'
    print(x) # 'ABC'
    print(codes) # [65, 66, 67]

    codes = [last := ord(c) for c in x]
    # variables assigned with := remain accessible after return
    print(last) # 67
    try:
        # c is gone, only existed in the listcomp
        print(c) # type: ignore
    except NameError as e:
        print(f'c only exists within the listcomp\n{e}')

def listcomp_filter():
    """Demonstration of listcomp filtering."""
    symbols = '$&%@#'
    ascii = [ord(s) for s in symbols if ord(s) > 36]
    print(ascii) # [38, 37, 64]

def listcomp_cartesian():
    """Demonstration of building lists from Cartesian product of iterables.

    Arranged similar to nested for loops
    """
    colors = ['black', 'white']
    sizes = ['S', 'M', 'L']
    # line break at the for clause for readability
    tshirts = [(color, size) for color in colors 
                             for size in sizes]
    print(tshirts)
    # alternate ordering by rearranging for clauses
    tshirts = [(color, size) for size in sizes 
                             for color in colors]
    print(tshirts)
    
