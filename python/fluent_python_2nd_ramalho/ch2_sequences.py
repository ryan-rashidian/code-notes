"""Chapter 2: An Array of Sequences

Container sequences:
    - can hold items of different types, including nested containers
    - examples: list, tuple, collections.deque

Flat sequences:
    - holds items of one simple type
    - examples: str, byte, array.array

See figure 2-1 (pg. 23) for diagram of container sequence memory storage.
"""

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
    
"""pg. 30 Tuples"""

def tuple_records():
    """Demonstration of tuples used as records with no field names.

    Position of the item gives its meaning.
    """
    lax_coordinates = (33.9425, -118.408056)
    city, year, pop, chg, area = ('Tokyo', 2003, 32_450, 0.66, 8014)
    travleler_ids = [
        ('USA', '31195855'),
        ('BRA', 'CE342567'),
        ('ESP', 'XDA205856')
    ]
    for passport in sorted(travleler_ids):
        print('%s/%s' % passport)

    for country, _ in travleler_ids:
        # unpacking tuple on each iteration
        print(country)

def tuple_immut_list():
    """Demonstration of tuples as immutable lists.

    For clarity and performance,
    - Tuples use less memory than lists of the same size
    - You know its length will never change

    Note:
        The immutablility of a tuple only applies to the references in it.
        If one of those reference points is a mutable object:
        then the value of the tuple changes.
    """
    a = (10, 'alpha', [1, 2])
    b = (10, 'alpha', [1, 2])
    print(a == b) # True

    b[-1].append(99)
    print(a == b) # False
    print(b) # (10, 'alpha', [1, 2, 99])

def tuple_mutable_obj():
    """Demonstration of tuples containing mutable objects.

    An object is only hashable if its value cannot ever change.
    An unhashable tuple cannot be inserted as a dict key, or a set element.
    """
    def fixed(o) -> bool:
        try:
            hash(o)
        except TypeError:
            return False
        return True

    tf = (10, 'alpha', (1, 2))
    tm = (10, 'alpha', [1, 2])
    print(fixed(tf)) # True
    print(fixed(tm)) # False

"""Tuples vs. Lists:
- Python compiler generates bytecode for a tuple constant in one operation
- for a list: it must push each element to the data stack
- tuples fixed length = exact memory space allocated
- lists = memory allocated with room to spare, to amortize the cost of appends
- references to itsms in a tuple are stored in an array in the tuple struct.
- a list holds a pointer to an array of references stored elsewhere
- as a list grows beyond its allocated space, it must reallocate the array
"""

def unpacking():
    """Demonstration of unpacking iterables."""
    lax_coordinates = (33.9425, -118.408056)
    latitude, longitude = lax_coordinates # unpacking
    print(latitude) # 33.9425
    print(longitude) # -118.408056
    
    a = 0
    b = 1
    b, a = a, b
    print('%d/%d' % (a, b)) # 1/0

def unpacking_splat_operator():
    """Demonstration of unpacking with * operator."""
    print(divmod(20, 8)) # (2, 4)
    t = (20, 8) 
    print(divmod(*t)) # (2, 4)
    quotient, remainder = divmod(*t)
    print(quotient) # 2
    print(remainder) # 4
    repacked = quotient, remainder
    print(repacked) # (2, 4)

    _, _, *rest = range(5)
    print(rest) # [2, 3, 4]

    _, _, *rest = range(3)
    print(rest) # [2]

    _, _, *rest = range(2)
    print(rest) # []

    _, *body, _, _ = range(5)
    print(body) # [1, 2]

    *head, _, _ = range(5)
    print(head) # [0, 1, 2]

def unpacking_function_calls():
    """Demonstration of unpacking function calls with * operator."""
    def fun(a, b, c, d, *rest):
        results = a, b, c, d, rest
        print(results)

    fun(*[1, 2], 3, *range(4, 7)) # (1, 2, 3, 4, (5, 6))

    example_tuple = *range(4), 4
    print(example_tuple) # (0, 1, 2, 3, 4)
    example_list = [*range(4), 4]
    print(example_list) # [0, 1, 2, 3, 4]
    example_set = {*range(4), 4, *(5, 6, 7)}
    print(example_set) # {0, 1, 2, 3, 4, 5, 6, 7}

def nested_unpacking():
    return

