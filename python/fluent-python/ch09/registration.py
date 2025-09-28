"""Decorator demo"""

# registry will hold references to functions decorated by @register
registry = []

# register takes a function as an argument
def register(func):
    # display what function is being decorated
    print(f'running register ({func})')
    # include func in registry
    registry.append(func)
    # return func: we must return a function
    return func

# f1 and f2 are decorated by @register
@register
def f1():
    print('running f1()')

@register
def f2():
    print('running f2()')

# f3 is not decorated
@register
def f3():
    print('running f3()')

# main displays the registry, then calls f1(), f2(), f3()
def main():
    print('running main()')
    print('registry ->', registry)
    f1()
    f2()
    f3()

if __name__ == '__main__':
    main()

