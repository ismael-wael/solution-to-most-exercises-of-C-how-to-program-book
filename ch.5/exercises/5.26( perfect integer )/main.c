//perfect numbers in the range 0 >> 1000
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(unsigned int i = 0 ; i <= 1000 ; i++)
    {
        perfectNumber(i);

    }
    return 0 ;
}
 void perfectNumber(int x)
 {
     int z =0;
     for(unsigned int y = x/2;y>=1;y--)
     {
         if(x%y==0)
         {
             z+=y;
         }
     }
     if (z==x)
     {
         printf("%d\n",x);
     }
 }









