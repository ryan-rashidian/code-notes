"""pg. 47 Slicing

all sequence types in Python support slicing operations.
"""

def slice_object():
    """Demonstration of slicing and stepping.

    s[a, b, c] --- where c is the step or stride

    [] slice operator creates slice() object. Python calls:
        seq.__getitem__(slice(start, stop, step))
    """
    s = 'bicycle'
    print(s[::3]) # bye
    print(s[::-1]) # elcycib
    print(s[::-2]) # eccb

    bye_slice = slice(None, None, 3)
    print(s[bye_slice]) # bye

    example_slice = slice(2, 5, 2)
    print(s[example_slice]) # cc

def assign_to_slice():
    """Demonstration of assigning object to mutable sequences."""
    l = list(range(10))
    print(l)
    l[2:5] = [20, 30]
    print(l)
    del l[5:7]
    print(l)
    l[3::2] = [11, 22]
    print(l)
    try:
        l[2:5] = 100 # type: ignore
    except TypeError:
        print('Object targeting slice must be iterable.')
        l[2:5] = [100]
        print(l)

