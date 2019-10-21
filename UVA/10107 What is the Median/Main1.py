import sys

arr = []
for line in sys.stdin:
    arr.append(int(line))
    arr = sorted(arr)
    if len(arr) % 2 == 0:
        x = int((arr[int(len(arr) / 2)] + arr[int(len(arr) / 2) - 1]) / 2)
    else:
        x = arr[int(len(arr) / 2)]
    print(x)
