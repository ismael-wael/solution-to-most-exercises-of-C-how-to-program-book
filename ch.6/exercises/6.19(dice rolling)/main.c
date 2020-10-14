#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum[13]={0};//initialize the whole array to zeros
    int first_dice,second_dice,;
    size_t i;
    for(i=0;i<36000;++i){
       first_dice = 1+rand() % 6;
       second_dice = 1+rand() % 6;
      ++sum[first_dice+second_dice];//increment the element whose index is the sum of the two dies by 1
    }
    printf("%s%13s\n\n","sum of two faces","frequency");
    for(i=2;i<13;++i){
            printf("%8d%18d\n",i,sum[i]);
    }
    return 0;
}
