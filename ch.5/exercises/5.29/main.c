//lowest common multiple of three numbers
#include <stdio.h>
#include <stdlib.h>
int lcm(int a , int b , int c);

int main()
{
    printf("%s","enter three positive integers (1 to 32767):");
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    lcm(x,y,z);
    return 0;
}

int lcm(int a ,int b ,int c)
{
    int i;
    for(i=1;;i++){
        if((i%a==0 )&& (i%b ==0 )&& (i%c ==0)){
                break;
        }
    }
    printf("the lowest common multiple is %d\n",i);
}


