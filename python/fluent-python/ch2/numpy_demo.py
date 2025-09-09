"""pg. 64 NumPy

Note from pg. 49:
The [] operator can take multiple indexes or slices separated by commas.
The __getitem__ and __setitem__ special methods that handle []:
    - receive the indices in a[i, j] as a tuple.
    - Python calls a.__getitem__((i, j))

The ellipsis --- written with three full stops (...):
    - syntactic feature of user extensions like NumPy
    - recognized as token by Python parser
    - alias for Ellipsis object, the single instance of ellipsis class
    - can be passed as an argument to functions as part of slice spec
"""
import numpy as np

def numpy_demo():
    """Demonstration of NumPy arrays."""
    a = np.arange(12)
    print(a)
    print(type(a))
    print(a.shape)
    a.shape = 3, 4
    print(a)
    print(a[2])
    print(a[2, 1])
    print(a[:, 1])
    print(a.transpose())

