#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    /*
    number a
    given expression is(!(x<5)&&!(y>=7))
    not given expression is !(!(x<5)&&!(y>=7))
    de morgan's expression is (x<5)||(y>=7)
      */
    int x = 5;
    int y = 10;
    printf("%d\n",!(!(x<5)&&!(y>=7)));// not the given expression
    printf("%d\n",(x<5)||(y>=7));//de morgan's expression
    /*
    number b
    given expression is (!(a==b)||!(g!=5))
    not given expression is !(!(a==b)||!(g!=5))
    de morgan's expression is (a==b) && (g != 5)
      */
    int a =3;
    int b =3;
    int g =5;
    printf("%d\n",!(!(a==b)||!(g!=5)));// not the given expression
    printf("%d\n",(a==b)&&(g!=5));//de morgan's expression
    /*
    number c
    given expression is !(x<=8)||!(y>4) == !((x<=8)&&(y>4))
    not given expression is !(!(x<=8)||!(y>4))
    de morgan's expression is (x<=8)&&(y>4)
      */
    printf("%d\n",!(!(x<=8)||!(y>4)));// not the given expression
    printf("%d\n",(x<=8)&&(y>4));//de morgan's expression
    /*
    number d
    given expression is !(i>4) || !(j<=6) == !((i>4)&&(j<=6))
    not given expression is !(!(i>4) || !(j<=6))
    de morgan's expression is (i>4) && (j<=6)
      */
      int i = 5;
      int j = 8;
    printf("%d\n",!(!(i>4) || !(j<=6)));// not the given expression
    printf("%d\n",(i>4) && (j<=6));//de morgan's expression
    return 0 ;
}
