#include <stdio.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) // Loop for each pass
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A) / sizeof(int);
    display(A, n);
    insertionSort(A, n);
    display(A, n);
    return 0;
}

// Output:
//  12, 54, 65, 7, 23, 9,
//  7, 9, 12, 23, 54, 65,