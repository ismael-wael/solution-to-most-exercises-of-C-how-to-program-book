#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
int main()
{
    srand(time(NULL));
    unsigned int i ;
    for(i=1; i<=20; i++)
    {
        printf("%10d",1+rand()%6);
        if(i%5==0)
        {
            puts("");
        }
    }

    return 0;
}
