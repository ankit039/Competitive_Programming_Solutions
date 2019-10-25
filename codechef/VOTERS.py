try:
    first, second, third = [int(x) for x in input().split()]
    first = {int(input()) for x in range(first)}
    second = {int(input()) for x in range(second)}
    third = {int(input()) for x in range(third)}
    result = (first.intersection(second)|(first.intersection(third))|(third.intersection(second)))
    result = sorted(result)
    
    print(len(result))
    for item in result:
        print(item)
except EOFError as e:
    pass

