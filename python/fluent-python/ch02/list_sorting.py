"""pg. 56 list.sort Versus the sorted Built-in"""

def sort_fruits():
    """Demonstration of list sorting.

    - list.sort method sorts a list in place
    - sorted function returns a copy

    Note:
        It is common Python API convention that Python methods,
        and functions that change objects in place should return None.
        This makes it clear that no new object was created.
    """
    fruits = ['grape', 'raspberry', 'apple', 'banana']
    print(sorted(fruits))
    print(fruits)
    print(sorted(fruits, reverse=True))
    print(sorted(fruits, key=len))
    print(sorted(fruits, key=len, reverse=True))
    print(fruits)
    print(fruits.sort())
    print(fruits)

