"""pg. 35 Unpacking Sequences and Iterables"""

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
    """Demonstration of nested unpacking."""
    products_sold = [
        ('soda', 1.99, 17, ('03-16-25', '03-23-25')),
        ('lemonade', 1.49, 12, ('03-22-25', '03-23-25')),
        ('coffee', 1.75, 15, ('03-20-25', '03-23-25')),
    ]

    print(f'{"":15} | {"stocked":>9} | {"sold":>9} | {"#":>5}')
    for name, _, quantity, (stocked, sold) in products_sold:
        print(f'{name:15} | {stocked:>9} | {sold:>9} | {quantity:>5}')

