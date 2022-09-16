#include <stdio.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // For number of passes
    {
        for (int j = 0; j < n - 1 - i; j++)
        { // For comparision in each pass
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A) / sizeof(int);
    display(A, n);    // Printuing Array before sorting
    bubblesort(A, n); // Sorting
    display(A, n);    // Printing Array after sorting

    return 0;
}