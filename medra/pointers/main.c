#include <stdio.h>
#include <stdlib.h>

void multiply1 (int x);// this function receive a number not a pointer..it make a copy of that number (parameter)
//and works on it..so the original is the same
void multiply2 (int *x);// this function receive a pointer not a simple variable (call by reference)
// it does not make a copy of the parameter like in call by value..instead it works on the original number
int main()
{
    int num , q ;//declaring a simple four byte variables of type integer
    int *p ;//declaring a pointer that points to integer values only
    num = 100 ;//initialization
    p = &num ;//initialization the pointer (& mean the address of num)
    q = *p ;//the * here mean the value at the address the pointer (p) points at..meaning num = 100
    printf("%d %d\n",p,q);

    p++;
    printf("%d\n",p);

    p+=2;
    printf("%d\n",p);

    int x1,y1,*xx,*yy;
    x1 = 5 ; y1 = 7 ;
    xx = &y1 ; yy = &x1;
    x1 = *xx; y1 = *yy;
    printf("%d %d\n",x1,y1);

    multiply1(x1);
    multiply2(xx);//he wants the value inside an address..so i gave him the address he will take the value inside it

    return 0;
}
void multiply1 (int x)
{
    printf("first function is %d\n",2*x);
}
void multiply2 (int *x)
{
    printf("first function is %d",2*(*x));
}
