for _ in range(int(input())):
    input()
    cars = 1
    speeds = [int(x) for x in input().split()]
    for i in range(1, len(speeds)):
        if (speeds[i] > speeds[i-1]):
            speeds[i] = speeds[i-1]
        else:
            cars += 1
    print(cars)

