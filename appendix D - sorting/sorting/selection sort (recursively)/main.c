#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int x[SIZE]={384,125,250,790,801,2,67,34,99,10,1,12,678};
//int x[SIZE]={384,125,250,790,801};
int selectionSort(int array[],size_t i);
int smallest(int array[],size_t i,size_t min);

int main()
{
     for(size_t i=0;i<SIZE;i++)
    {
        printf("%d  ",x[i]);
    }
    puts("");
    selectionSort(x,0);
    for(size_t i=0;i<SIZE;i++)
    {
        printf("%d  ",x[i]);
    }

    return 0;
}
//every loop corresponds to one recursive function
//here i have 2 loops so i need two recursive functions
//one to get me the smallest
//one to make the subArray
int selectionSort(int array[],size_t i)
{
    if(i==(SIZE-1))
        return array[i];
    else
    {
        int z = smallest(array,i,i);
        if(array[z]<array[i])
        {
           array[i]^=array[z];
           array[z]^=array[i];
           array[i]^=array[z];
        }
        selectionSort(array,i+1);
    }
}
int smallest(int array[],size_t i,size_t min)
{
    //int min = i ; it supposed to be that but didn't work so i sent it as a parameter
    if(i==SIZE-1)
        return min ;
    else{
        if(array[i+1]<array[min])
            min = i+1;
        smallest(array,i+1,min);
    }
}
