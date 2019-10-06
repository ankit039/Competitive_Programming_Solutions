if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    arrr = list(arr)
    bb = []

    aa = max(arrr)
    for i in range(n):
        if arrr[i] != aa:
            bb.append(arrr[i])
    print(max(bb))
