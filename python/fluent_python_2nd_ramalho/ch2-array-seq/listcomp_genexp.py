"""pg. 25 List Comprehensions and Generator Expressions"""

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
    
import array

def genexp():
    """Demonstration of generator expression

    Used to initialize tuples, arrays, and other types of sequences.
    Genexps use the same syntax as listcomps, but are enclose in ().
    """
    symbols = '$&%@#'
    built_tuple = tuple(ord(symbol) for symbol in symbols)
    print(built_tuple) # (36, 38, 37, 64, 35)

    built_array = array.array('I', (ord(symbol) for symbol in symbols))
    print(built_array) # array('I', [36, 38, 37, 64, 35])
    # array constructor takes two arguments, so () around genexp is needed

def genexp_cartesian():
    """Demonstration of cartesian products in a genexp."""
    colors = ['black', 'white']
    sizes = ['S', 'M', 'L']
    for tshirt in (f'{c} {s}' for c in colors for s in sizes):
        # the genexp yields items one by one
        # a list with all six tshirt variations is never produced
        print(tshirt)
