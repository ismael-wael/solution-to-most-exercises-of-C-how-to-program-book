#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int first , second , third , forth;
    printf("enter a 4-digit number(-1 to end)\n");
    scanf("%d",&x);
    while(x!=-1){
    first = x / 1000 ;
    second =(x%1000)/100;
    third = ((x%1000)%(100))/10;
    forth = ((x%1000)%(100))%10;
    first = (first + 7)%10;
    second = (second + 7)%10;
    third = (third + 7)%10;
    forth = (forth + 7)%10;
    int first1 = first ;
    int second1 = second ;
    first = third ;
    third = first1;
    second = forth;
    forth = second1;
    printf("the encrypted code is %d%d%d%d\n",first,second,third,forth);
    printf("enter a 4-digit number(-1 to end)\n");
    scanf("%d",&x);
    }
    return 0;
}
