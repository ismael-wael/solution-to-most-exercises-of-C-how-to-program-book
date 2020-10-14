#include <stdio.h>
void InsertionSort(int* arr, int size);
#define SIZE 10
int main()
{
    int arr[SIZE] = {6 ,3 , 2 ,8 , 4,-1,0,7,-20,5};
    InsertionSort(arr,SIZE);
    for(int i = 0 ; i < SIZE ; i++)
        printf("%d, ",arr[i]);
	return 0;
}

void InsertionSort(int* arr, int size)
{
    for(int i = 1,j ; i < size ; i++)
    {
        int temp = arr[i];
        for(j = i -1 ; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}
