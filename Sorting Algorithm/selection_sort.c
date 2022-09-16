#include <stdio.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running selection Sort........\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // swapping A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 2};
    int n = sizeof(A) / sizeof(int);
    display(A, n);
    selectionSort(A, n);
    display(A, n);

    return 0;
}