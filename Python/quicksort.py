    def sort(array):
        smaller = min(array)

        keyValue = 0
        if smaller < 0: keyValue = 1 - smaller

        lenArray = len(array)
        tempArray = [0] * lenArray

        for i in range(lenArray):
            tempArray[i] = array[i] + keyValue

        bigger = max(tempArray)
        smaller = min(tempArray)
        size = (bigger - smaller) + 2

        contArray = [0] * size

        for i in range(len(tempArray)):
            contArray[tempArray[i] - smaller + 1] += 1

        for i in range(1, len(contArray)):
            contArray[i] += contArray[i - 1]


        for i in range(len(tempArray)):
            array[contArray[tempArray[i] - smaller + 1] -1] = tempArray[i]
            contArray[tempArray[i] - smaller + 1] -= 1
