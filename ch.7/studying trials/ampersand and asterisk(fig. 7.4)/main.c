#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7;
    int *aptr = &a; // set aptr to the address of a
    printf("the address of a is %p"
           "\nthe value of aptr is %p",&a,aptr);//aptr holds the address of a, so it works exactly as &a
    printf("\n\nthe value of a is %d"
           "\nthe value of *aptr is %d",a,*aptr);
    printf("\n\nshowing that * and & are complements of"
           " each other\n&*aptr=%p"
           "\n*&aptr = %p\n",&*aptr,*&aptr);
           //&*aptr = get the address of the value that the pointer points to
           //for the address of the pointer get the value it holds. i.e, it equals aptr = the address of a
    return 0;
}
