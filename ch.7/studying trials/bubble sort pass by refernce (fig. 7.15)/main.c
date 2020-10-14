#include <stdio.h>
#include <stdlib.h>
int bubbleSort(int *const a[]);

int main()
{
    int array[5]={5,2,3,1,4};
    bubbleSort(array);
    for(int i=0;i<5;i++)
        printf("%d ",array[i]);
    return 0;
}

int bubbleSort(int *const a[])
{
    void swap(int *element1ptr , int *element2ptr);
    for(size_t i=0;i<5;i++)
    {
        for(size_t j = 0 ; j<4 ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

void swap(int *element1ptr , int *element2ptr)
{
    int hold = *element1ptr ;
    *element1ptr = *element2ptr;
    *element2ptr = hold ;

}

