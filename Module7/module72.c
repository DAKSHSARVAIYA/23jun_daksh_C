#include <iostream>

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

template<typename T>
void quicksort(T arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

template<typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int intArr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(intArr) / sizeof(intArr[0]);
    std::cout << "Original integer array: ";
    printArray(intArr, n);
    quicksort(intArr, 0, n - 1);
    std::cout << "Sorted integer array: ";
    printArray(intArr, n);

    float floatArr[] = {10.1, 7.3, 8.5, 9.0, 1.2, 5.4};
    n = sizeof(floatArr) / sizeof(floatArr[0]);
    std::cout << "Original float array: ";
    printArray(floatArr, n);
    quicksort(floatArr, 0, n - 1);
    std::cout << "Sorted float array: ";
    printArray(floatArr, n);

    return 0;
}
