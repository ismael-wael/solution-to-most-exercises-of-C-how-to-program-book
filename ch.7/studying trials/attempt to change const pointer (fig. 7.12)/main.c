#include <stdio.h>
#include <stdlib.h>
void f(const int *xptr);
int main()
{
    int y ;
    f(&y);
    return 0;
}
void f(const int *xptr)
{
    *xptr = 100;
}
