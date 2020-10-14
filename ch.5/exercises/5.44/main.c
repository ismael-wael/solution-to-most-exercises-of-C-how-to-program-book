#include <stdio.h>
#include <stdlib.h>

int mystery(int a , int b);

int main()
{
    printf("%s","enter two positive integers :");
    int x ;
    int y ;
    scanf("%d%d",&x,&y);
    printf("the result is %d\n",mystery(x,y));
    return 0;
}

int mystery(int a ,int b)
{
    if(1==b){
        return a ;
    }
    if(-1==b){
        return -a ;
    }


    if(b >1){
        return a + mystery(a ,b-1);
    }
    else{
        return -a + mystery(a,b+1);
    }
}


