"""pg. 99 Immutable Mappings

Python does not have have a real immutable mapping,
but a stand-in is available: MappingProxyType

Useful for when mapping represents hardware (like GPIO pins)
"""

from types import MappingProxyType

d = {1: 'A'}
d_proxy = MappingProxyType(d)

print(d_proxy)
print(d_proxy[1])

try:
    d_proxy[2] = 'x' # type: ignore
except TypeError:
    print('Changes cannot be made through d_proxy')

d[2] = 'B'
print(d_proxy)
print(d_proxy[2])

