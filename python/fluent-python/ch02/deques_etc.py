"""pg. 67 Deques and Other Queues

The .append and .pop methods make a list usable as a stack or a queue.
    - using .append and .pop(0) gives FIFO behavior
But inserting and removing from the head (index 0) is costly,
the entire list must be shifted in memory.

collections.deque is a thread-safe double-ended queue,
designed for fast inserting and removing from both ends.
    - also useful for 'last seen item'
"""
from collections import deque

def deque_demo():
    """Demonstration of collections.deque."""
    dq = deque(range(10), maxlen=10)
    print(dq)
    dq.rotate(3)
    print(dq)
    dq.rotate(-4)
    print(dq)
    dq.appendleft(-1)
    print(dq)
    dq.extend([11, 22, 33])
    print(dq)
    dq.extendleft([10, 20, 30, 40])
    print(dq)

