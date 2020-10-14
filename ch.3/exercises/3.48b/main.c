#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int first , second , third , forth;
    printf("enter the encrypted code (-1 to end)\n");
    scanf("%d",&x);
    while(x!=-1){
    first = x / 1000 ;
    second =(x%1000)/100;
    third = ((x%1000)%(100))/10;
    forth = ((x%1000)%(100))%10;
    int first1 = first ;
    int second1 = second ;
    first = third ;
    second = forth;
    third = first1;
    forth = second1;
    if(first+10 >16){
        first = first - 7 ;
    }
    else{
        first = (first+10)-7;
    }
    if(second+10 >16){
        second = second - 7 ;
    }
    else{
        second = (second+10)-7;
    }
    if(third+10 >16){
        third = third - 7 ;
    }
    else{
        third = (third+10)-7;
    }
    if(forth+10 >16){
        forth = forth - 7 ;
    }
    else{
        forth = (forth+10)-7;
    }
    printf("the decrypted code is %d%d%d%d\n",first,second,third,forth);
    printf("enter a 4-digit number(-1 to end)\n");
    scanf("%d",&x);
    }
    return 0;
}
