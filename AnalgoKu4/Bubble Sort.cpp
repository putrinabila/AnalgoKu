/*
Nama : Putri Nabila
NPM : 140810180007
Deskripsi : Buble Sort
*/
#include <iostream>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {66, 64, 25, 12, 23, 11, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array yang dimasukkan : ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array yang sudah disort : ");
    printArray(arr, n);
    return 0;
}


