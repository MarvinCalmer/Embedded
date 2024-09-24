//
// Created by marvi on 24.09.2024.
//
#include <stdio.h>
#include "bubble_sort.h"
#include <stdlib.h>


void ShowArray(int arr[100], int n) {
    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void PopulateArray(int arr[100], int n) {
    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        int randNumber=rand() % 100;
        arr[i] = randNumber;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n = sizeof(arr) / sizeof(arr[0]);

    PopulateArray(arr, n);

    bubbleSort(arr, n);

    ShowArray(arr, n);

    return 0;
}
