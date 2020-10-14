#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int i ;
    srand(time(NULL));
    for(i=1; i<=10; i++)
    {
        printf("%10d",1+(rand()%6));
        if(i%5==0)
        {
            puts("");
        }
    }

    return 0;
}
