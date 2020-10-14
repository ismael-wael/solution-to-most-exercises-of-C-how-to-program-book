#include <stdio.h>
#include <stdlib.h>

int main()
{
    int commands[7] ={'1','2','3','4','5','6','9'};
    char instruct='0';

    while(instruct != commands[6])
    {
        getchar();//remove getchar() and see what happens
        scanf("%c",&instruct);
        printf("%s","hello");
    }
    return 0;
}



