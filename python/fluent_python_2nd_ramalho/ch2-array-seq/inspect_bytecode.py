"""Under the hood.

Python is like a virtual programming language build on top of C functions.
The interpreter can be thought of as the 'Python Virtual Machine'
- Python source files are first compiled into bytecode
- The bytecode is executed one instruction at a time in a loop
- The loop contains a series of switch/case statements mapped to calls
- Each opcode maps to a specific C function:
    (e.g BINARY_ADD calls PyNumber_Add)

'Python is slow!' - Due to the nature of how its built,
but also a design philosophy that prioritizes easy to read/write syntax.

Python source ->
Tokenized and Parsed into Abstract Syntax Tree (AST) ->
Compiled into bytecode ->
CPython Virtual Machine Loop (Interpreter) ->
CPython Runtime (pre-compiled C functions) ->

C functions in CPython are precompiled when Python is built/installed.
"""

from dis import dis

def main():
    print(dis('s[a] += b'))

if __name__ == '__main__':
    main()

