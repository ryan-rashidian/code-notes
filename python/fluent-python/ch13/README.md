# Chapter 13: Interfaces, Protocols, and ABCs

OOP is all about interfaces.
The best approach to understanding a type in Python is knowing its methods.

4 ways of defining and using interfaces:

**Duck typing** - Python's default approach to typing

**Goose typing** - Approach supported by abstract base classes,
relies on runtime checks of objects against ABCs

**Static typing** - The traditional approach of languages like C,
supported in Python with the typing module,
enforced with external type checkers compliant with PEP 484

**Static duck typing** - Made popular by Go,
supported in Python with typing.Protocol,
also enforced by external type checker.

The word **protocol** has different meanings in Python,
refers to object protocols for fulfilling certain roles.

**Dynamic protocol** - Informal protocols Python always had; implicit.

**Static protocol** - explicit definition: a typing.Protocol subclass

An object can implement part of a dynamic protocol and still be useful.
In a static protocol, an object must provide every method declared.

Python provides another way of defining an explicit interface in code:
an abstract base class (ABC).

## Defensive Programming and "Fail Fast"

Runtime errors should be raised as soon as possible, for example:

- rejecting invalid arguments at the start of a function body.

