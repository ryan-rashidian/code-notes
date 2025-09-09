"""pg. 120 Byte Essentials

Each item in byte and bytearray is an integer between 0 and 255 
"""

cafe = bytes('cafe', encoding='utf8')
print(cafe)
print(cafe[0]) # returns an int
print(cafe[:1]) # returns bytes sequence of length 1

cafe_arr = bytearray(cafe)
print(cafe_arr)
print(cafe_arr[-1:])

