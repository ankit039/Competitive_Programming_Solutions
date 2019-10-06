#include <stdio.h>

void insertionSort (int array[], int array_size) {
    int i, j, k;

    for (i = 1; i < array_size; i++) {
        k = array[i];
        j = i - 1;

        while ((j >= 0) && (array[j] > k)) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = k;
    }

}


int main (void) {

    int i;
    int array[10] = {3, 6, 1, 7, 2, 0, 4, 5, 9, 8};

    printf("       array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        cout << array[i] << ' ';
    }
    cout << endl;

    insertionSort(array, sizeof(array) / sizeof(array[0]));

    printf("sorted array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
 	cout << array[i] << ' ';
    }
    cout << endl;

    return 0;
}
