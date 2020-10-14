#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 100;
    int first , second , third , y ;
    while(x<=999){
        first = x / 100 ;
        second =(x%100)/10;
        third = (x%100)%10;
        y = first*first*first + second*second*second + third * third*third;
        if(y == x){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}
