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
