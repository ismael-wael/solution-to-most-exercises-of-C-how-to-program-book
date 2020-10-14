//Quick sort algorithm
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 // maximum size is 10

void quickSort(int a[],int begin , int finish);
void partition(int b[],int start,  int end);

int main()
{
    int array[SIZE] = {10,34,1,4,6,3,50,77,-1,-50};
    for(size_t i = 0 ; i<SIZE ; i++)
       printf("%d   ",array[i]);

    puts("");
    quickSort(array,0,SIZE-1);
    puts("");

    for(size_t i = 0 ; i<SIZE ; i++)
       printf("%d   ",array[i]);

    return 0;
}

void quickSort(int a[],int begin , int finish)
{
    if((finish-begin)>=1)
    {
         partition(a,begin,finish);
    }
}

void partition(int b[],int start, int end )
{
    int  one=1,two=2,three=3,four=4;//represent boundaries of the subarrays
    int hold1,hold2;
    int z1 = start , z2 = end ;//to hold the initial and final values for upcoming use
    int x = b[start];
    size_t j ;
    //the while role : is to put the first element in the unsorted array in position in the sorted array
    while(1)
    {
        //compare from rightmost
        for( j = end ; j>start ; j--)
        {
            if(b[j]<x)
            {
                int hold = b[start] ;
                b[start] = b[j];
                b[j] = hold ;
                end=j;
                break;
            }
        }
        if(j==start)
            break;
        //compare from leftmost
        for( j = start+1; j<end ; j++)
        {
            if(b[j]>x)
            {
                int hold = b[end] ;
                b[end] = b[j];
                b[j] = hold ;
                start=j;
                break;
             }
        }
        if(j==end)
          break;
    }
    //divide the array into subarrays
    for(size_t i = 0 ; i <SIZE ; i++)
    {//we have three cases for the final position of the element
        if(b[i]==x)
        {
            if(i==z1)//case 1 : it's in the leftmost position so we have one subarray which is all remaining unsorted array except first element
            {//four and three represent the boundaries of the subarray from right of the sorted element
                four = z2;
                three = i +1 ;
                quickSort(b,three,four);
                break;
            }
            else if(i == z2)//case 2 : it's in the rightmost position so we have one subarray which is all remaining unsorted array except last element
            {//one and two represent the boundaries of the subarray from left of the sorted element
                one = z1 ;
                two = i-1;
                quickSort(b,one,two);
                break;
            }
            else//case 3 : it's in a position in between so we have two subarrays which is all remaining unsorted array except that one sorted element in between
            {//one and two represent the boundaries of the subarray from left of the sorted element
             //four and three represent the boundaries of the subarray from right of the sorted element
                one = z1 ;
                two = i -1;
                three = i+1;
                four = z2 ;
                hold1=three;
                hold2=four;
                quickSort(b,one,two);
                quickSort(b,hold1,hold2);
                //although the values of hold1 and hold2 might change during the process
                //the initial values is saved in stack from first call of quicksort
                //so when it finishes sorting the first half and starts to return,
                //it will restore the initial values of hold1, hold2
                break;
            }
        }
    }
}
