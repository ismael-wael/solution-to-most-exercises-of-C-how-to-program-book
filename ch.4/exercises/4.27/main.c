#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int side1 = 1 ; side1 <= 100 ; side1++)
    {
        for(int side2 = 1 ; side2 <= 100 ; side2++)
        {
            int x = side1*side1 + side2*side2 ;
            for(int side3 = 1 ; side3 <= 100 ; side3++)
            {
                if(x == side3*side3)
                {
                    printf("%d %d %d\n",side1,side2,side3);
                }
            }
        }
    }
    return 0;
}
