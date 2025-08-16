"""pg. 62 Memory Views

High-level, safe wrapper around raw pointers.

Essentially a generalized NumPy array structure in Python itself.
It allows sharing memory between data-structures without copying first.
"""

from array import array

def mem_view():
    """Demonstration of memory views."""
    octets = array('B', range(6))
    m1 = memoryview(octets)
    print(m1.tolist())
    m2 = m1.cast('B', [2, 3])
    print(m2.tolist())
    m3 = m1.cast('B', [3, 2])
    print(m3.tolist())

    m2[1,1] = 22
    m3[1,1] = 33
    print(octets)


