#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i ;
    unsigned int seed ;
    printf("%s","enter seed (-1 to quit)");
    scanf("%u",&seed);
    while(seed != -1){
    srand(seed);
    for(i=1; i<=10; i++)
    {
        printf("%10d",1+(rand()%6));
        if(i%5==0)
        {
            puts("");
        }
    }
    printf("%s","enter seed (-1 to quit)");
    scanf("%u",&seed);

    }
    return 0;
}
