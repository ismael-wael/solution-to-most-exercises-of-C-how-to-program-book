#include <stdio.h>
#include <stdlib.h>
int flip(void);

int main()
{
    unsigned int heads = 0 ;
    unsigned int tails = 0 ;
    unsigned int roll ;

    for(roll = 1; roll<=100;++roll){
           switch(flip()){
            case 0 :
            ++tails;
            break;
            case 1 :
            ++heads;
            break;
        }
    }
    printf("%s%13s\n","face","frequency");
    printf("   0%13u\n",tails);
    printf("   1%13u\n",heads);
    return 0;
}

int flip(void)
{
     int toss = rand()%2;
     return toss ;
}
