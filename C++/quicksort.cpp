#include <stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int partition (int array[], int l, int r) {
    int pivot = array[r];
    int i = (l - 1);

    for (int j = l; j <= r - 1; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[r]);
    return (i + 1);
}

void quickSort(int array[], int l, int r) {
    if (l < r) {
        int pivot = partition(array, l, r);
        quickSort(array, l, pivot - 1);
        quickSort(array, pivot + 1, r);
    }
}



int main (void) {

    int i;
    int array[10] = {3, 6, 1, 7, 2, 0, 4, 5, 9, 8};

    printf("       array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    quickSort(array, 0, sizeof(array) / sizeof(array[0]) - 1);

    printf("sorted array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
