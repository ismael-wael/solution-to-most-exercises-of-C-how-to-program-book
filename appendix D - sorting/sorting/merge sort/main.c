//merge sort algorithm
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void mergeSort(int array[],size_t length);
void sortSubArray(int array[],size_t low , size_t high);
void merge(int array[],size_t left , size_t middle1
            , size_t middle2 ,size_t right);
int main(void)
{
    int array[SIZE];
    srand(time(NULL));
    for(size_t i = 0 ; i < SIZE ; i++)
    {
        array[i]=rand()%90+10;
    }
    for(size_t i = 0 ; i < SIZE ; i++)
    {
        printf("%d   ",array[i]);
    }
    puts("");
    mergeSort(array,SIZE);
    for(size_t i = 0 ; i < SIZE ; i++)
    {
        printf("%d   ",array[i]);
    }

    return 0 ;
}
//function that merge sorts the array
void mergeSort(int array[],size_t length)
{
    sortSubArray(array,0,length-1);
}
//function that sorts a piece of the array
void sortSubArray(int array[],size_t low , size_t high)
{
    //test base case(i.e if size of array is 1 or not)
    if((high-low)>=1)
    {//if not base case
        size_t middle1 = (low+high)/2;
        size_t middle2 = middle1+1;
        //split array in half and sort each half recursively
        sortSubArray(array,low,middle1);//first half
        sortSubArray(array,middle2,high);//second half
        //merge the two sorted arrays
        merge(array,low,middle1,middle2,high);
    }
}
//merge two sorted subarrays into one sorted subarray
void merge(int array[],size_t left , size_t middle1
            , size_t middle2 ,size_t right)
{
    size_t leftIndex = left;//index into left subarray
    size_t rightIndex = middle2;//index into right subarray
    size_t combinedIndex = left;//index into temporary array
    int tempArray[SIZE];//temporary array
    //merge the subarrays until the end of one is reached
    while(leftIndex <= middle1 && rightIndex <= right)
    {//place the smaller of the two current elements in result
     //and move to the next space in the subarray
        if(array[leftIndex]<=array[rightIndex])
        {
            tempArray[combinedIndex++]=array[leftIndex++];
        }
        else
        {
            tempArray[combinedIndex++]=array[rightIndex++];
        }
    }
    if(leftIndex ==middle2)//if at end of left subarray
    {
        while(rightIndex<=right)//copy the right subarray
        {
            tempArray[combinedIndex++]=array[rightIndex++];
        }
    }else{//if at end of right subarray
        while(leftIndex<=middle1)//copy the left subarray
        {
            tempArray[combinedIndex++]=array[leftIndex++];
        }
    }
    //copy values back into original array
    for(size_t i = left ; i <= right ; i++)
    {
        array[i]=tempArray[i];
    }
}







