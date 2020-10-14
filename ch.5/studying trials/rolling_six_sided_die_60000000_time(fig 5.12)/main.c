//#include <stdio.h>
//#include <stdlib.h>

int main()
{
    unsigned int frequency1 = 0;
    unsigned int frequency2 = 0;
    unsigned int frequency3 = 0;
    unsigned int frequency4 = 0;
    unsigned int frequency5 = 0;
    unsigned int frequency6 = 0;
    unsigned int roll ;
    for(roll = 1; roll<=60000000;++roll){
        int face = 1 + rand()%6;
        switch(face){
        case 1 :
            ++frequency1;
            break;
            case 2 :
            ++frequency2;
            break;
            case 3 :
            ++frequency3;
            break;
            case 4 :
            ++frequency4;
            break;
            case 5 :
            ++frequency5;
            break;
            case 6 :
            ++frequency6;
            break;


        }
    }
    printf("%s%13s\n","face","frequency");
    printf("   1%13u\n",frequency1);
    printf("   2%13u\n",frequency2);
    printf("   3%13u\n",frequency3);
    printf("   4%13u\n",frequency4);
    printf("   5%13u\n",frequency5);
    printf("   6%13u\n",frequency6);
    /*this is an effectient code
        unsigned int frequency[6]={0} ;
    for(unsigned int roll = 1; roll<=60000000;++roll){
        int face = rand()%6;
        ++frequency[face];
    }
    printf("%s%13s\n","face","frequency");
    for(int i = 0; i<=5;++i){
            printf("   %d%13u\n",i+1,frequency[i]);
    }*/
    return 0;
}
#include <stdio.h>
