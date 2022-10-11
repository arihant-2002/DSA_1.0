// ***************** MERGE SORT ********************

#include<stdio.h>

void mergeSort(int arr[], int, int);
void merge(int arr[], int, int, int);

int main()
{
    int arr[] = {3,7,5,1,6,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);
    printf("Sorted Array is \n");
    for (int i=0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void mergeSort(int arr[], int start, int end)
{
    if(start >= end)
        return;
    int mid = start + (end-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void merge(int arr[], int start, int mid, int end)
{
    int merged[end-start+1];
    int id1 = start, id2 = mid+1;
    int i=0, j;

    while(id1<=mid && id2<=end)
    {
        if(arr[id1] <= arr[id2]){
            merged[i++] = arr[id1++];
        }
        else
            merged[i++] = arr[id2++];
    }

    while(id1<=mid)
        merged[i++] = arr[id1++];
    while(id2<=end)
        merged[i++] = arr[id2++];

    int size = sizeof(merged) / sizeof(merged[0]);
    for (int i = 0, j = start; i < size; i++, j++)
        arr[j] = merged[i];
}


//OUTPUT:
//Sorted Array is
//1 2 3 4 5 6 7
