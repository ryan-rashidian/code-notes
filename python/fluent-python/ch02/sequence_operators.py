"""pg. 50 Using operators with sequences."""

def concat_sequence():
    """
    Usually both operands for + and * must be the same type,
    and a new sequence of that same type is created.

    However, to concatenate multiple copies of the same sequence,
    multiply it by an integer (again, a new sequence is created)
    """
    l = [1, 2, 3]
    print (l * 5)
    print (5 * 'abcd')

def list_of_lists():
    """Initialize a list of nested lists with listcomp."""
    board = [['_'] * 3 for _ in range(3)]
    print(board)
    board[1][2] = 'X'
    print(board)

def augmented_assign_sequences():
    """Augmented assignment operators += and *= behave differently.

    Depends on the first operand:
    - Python falls back to __add__ if __iadd__ is not implemented.
    - non-mutable sequences will be raplaced by new object.
    - mutable sequences will be modified in place by using __iadd__.
    """
    l = [1, 2, 3]
    print(id(l))
    print(hex(id(l)))
    l *= 2
    print(l)
    print(id(l))
    print(hex(id(l)))

    t = (1, 2, 3)
    print(id(t))
    print(hex(id(t)))
    t *= 2
    print(t)
    print(id(t))
    print(hex(id(t)))

