#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z;
    int day , month , year ;
    int current_day , current_month , current_year ;
    printf("enter birthyear , month and day(-1,-1,-1 to quit) ? ");
    scanf("%d %d %d",&year,&month,&day);
    while((year!= -1)&&(month!= -1)&&(day!= -1)){
    printf("enter current year , month and day ? ");
    scanf("%d %d %d",&current_year,&current_month,&current_day);
    x = current_year - year ;
    y = current_month - month ;
    z = current_day - day ;
     if(y>=7 && z>=1){
        x +=1;
     }
     printf("your age in years is %d\n",x);
     int maximum_heart_rate = 220 - x ;
     printf("your maximum heart rate in beats per minutes is %d\n",maximum_heart_rate);
     int target_heart_rate = 0.7 * maximum_heart_rate ;
     printf("your target heart rate in beats per minute is %d\n",target_heart_rate);
     printf("enter birthyear , month and day(-1,-1,-1 to quit) ? ");
     scanf("%d %d %d",&year,&month,&day);
    }
    return 0;
}
