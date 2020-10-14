#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int linearSearch(const int array[],int key,size_t index);

int main()
{
    int a[SIZE]={0,2,4,6,8,10};
    printf("enter integer search key: ");
    int searchKey;
    scanf("%d",&searchKey);
    printf("%d",linearSearch(a,searchKey,0));
    return 0;
}
int linearSearch(const int array[],int key,size_t index)
{//then index worked as i in for loop,
//that's it recursion is like loops exactly, any problem that's solved by loops can be solved by recursion
//if i used 2 loops then i need to have 2 indices instead of one as a parameter to the recursion function
    if(array[index]==key)
        return index ;//the base to me when recursion ends is when i find my key
    if(index==SIZE)
        return -1 ;
    else
       linearSearch(array,key,index+1);
}
