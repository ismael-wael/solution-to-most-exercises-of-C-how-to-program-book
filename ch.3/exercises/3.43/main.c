#include <stdio.h>
#include <stdlib.h>
// if the largest side is larger than the summation of the other
//two sides, then this is not a triangle.
int main(void)
{
    printf("enter 3 values represents the sides of a triangle :");
    int one,two,three,hold ;
    scanf("%d %d %d",&one,&two,&three);
    int x[3] ={one,two,three};
    for(size_t i = 1 ; i < 3  ; i++)
    {
        for(size_t j=0 ; j <3-i;j++)
        {
            if(x[j]>x[j+1])
            {
                x[j]^=x[j+1];
                x[j+1]^=x[j];
                x[j]^=x[j+1];
            }
        }
    }
    if(x[2]>x[1]+x[0])
        printf("not a triangle");
    else
        printf("a triangle");
	return 0;
}
