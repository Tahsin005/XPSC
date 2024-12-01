#include<stdio.h>

void heapify(int arr[], int curr, int size) {
    int largest = curr;

    int leftChild = 2 * curr + 1;
    int rightChild = 2 * curr + 2;

    if (leftChild < size && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }

    if (rightChild < size && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    if (largest != curr) {
        int temp = arr[curr];
        arr[curr] = arr[largest];
        arr[largest] = temp;

        heapify(arr, largest, size);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >=0; i--) {
        heapify(arr, i, n);
    }

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, 0, i);
    }
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}