// comparing the rainfall rate for 2 different years
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int highest_rainfall ;
    int current_rainfall ;
    puts("enter the highest rainfall in your country ?");
    scanf("%d",&highest_rainfall);
    puts("enter the current rainfall in your country ?");
    scanf("%d",&current_rainfall);
    if ( current_rainfall > highest_rainfall){
        puts("current rainfall is higher than highest rainfall");
         highest_rainfall = current_rainfall ;
        printf("the new highest rainfall is %d",current_rainfall);
    }
    if ( current_rainfall < highest_rainfall){
        puts("current rainfall is smaller than highest rainfall");
    }

    return 0;
}
