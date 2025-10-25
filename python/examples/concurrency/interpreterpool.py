"""Demonstration of InterpreterPoolExecutor implemented in Python 3.14"""

import math
import os
import time

from concurrent.futures import InterpreterPoolExecutor, as_completed


cores = os.cpu_count()
print(cores)


start = time.perf_counter()

results = []
with InterpreterPoolExecutor(max_workers=cores) as executor:
    futures = [executor.submit(math.factorial, i) for i in range(1000, 12000)]

    for future in as_completed(futures):
        results.append(future.result())

end = time.perf_counter()
print(end - start)


start = time.perf_counter()

results = []
for i in range(1000, 12000):
    results.append(math.factorial(i))

end = time.perf_counter()
print(end - start)

