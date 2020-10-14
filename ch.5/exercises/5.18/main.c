#include <stdio.h>
#include <stdlib.h>

int isEven(int x);

int main()
{
    int i ;
    printf("enter a number (0) to quit");
    scanf("%d",&i);
    printf("%15s %25s\n","Number","validity");
    for(;i != -1 ;){
        printf("%15d%25d\n",i,isEven(i));
        scanf("%d",&i);
    }


    return 0;
}

int isEven(int x)
{
    if(x%2==0){
        return 1 ;
    }
    else{
        return 0;
    }

}

