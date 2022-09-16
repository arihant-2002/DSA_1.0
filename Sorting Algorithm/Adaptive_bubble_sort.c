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
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of passes
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For comparision in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9}; // Unsorted Array
    int B[] = {1, 2, 3, 4, 5, 6, 7};  // Sorted Array
    int n = sizeof(A) / sizeof(int);
    display(A, n);
    bubblesort(A, n);
    display(A, n);

    display(B, n);
    bubblesort(B, n);
    display(B, n);
    return 0;
}