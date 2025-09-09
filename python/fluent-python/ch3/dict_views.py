"""pg. 101 Dictionary Views"""

d = dict(a=10, b=20, c=30)
values = d.values()
print(values)
print(len(values))
print(list(values))
print(reversed(values))

try:
    values[0] # type: ignore
except TypeError as e:
    print(f'object is not subscriptable\n{e}')

"""
A view item is a 'dynamic proxy',
if the source dict is updated, you can immediately see the changes
"""

d['z'] = 99
print(d)
print(values)

