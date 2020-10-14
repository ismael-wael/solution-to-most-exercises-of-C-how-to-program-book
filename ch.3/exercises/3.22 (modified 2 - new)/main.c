#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 2;
    int y=0 , z=0;
    int counter = 2;
    printf("enter how many prime numbers you want : ");
    scanf("%d",&y);
    while(z<y)
    {
        while(counter<=x-1)
        {
           if(x%counter==0)
           {
            break ;
           }
           counter++;
        }
        if(counter==x)
        {
            printf("%d\n",x);
            z++;
        }
        counter = 2;
        x++;
    }
    return 0 ;
}
