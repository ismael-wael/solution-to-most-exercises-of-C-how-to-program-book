#include <stdio.h>
#include <stdlib.h>

static int add(int a , int b )
{
    return a+b;
}

static int subtract(int a , int b )
{
    return a-b;
}


int main()
{
    int i =12 , j = 3 ;
    int result ;
    int (*func_ptr)(int, int);//function to pointer declaration

    printf("would you like to add or subtract (a/s)?");

    if(getchar() == 'a')
        func_ptr = add ;
    else
        func_ptr = subtract ;

    result = func_ptr(i,j);

    printf("the result is %d\n",result);

    return 0;
}


