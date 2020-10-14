//decimal equivalent of a binary number ( 6 digits maximum or less )
/* if i want to make it 7 digits for example i just have to
add another zero to each row
and /10 & %10 to the last 2 (sixth & seventh ) respectively */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int first , second , third , forth , fifth , sixth ;
    printf("enter a 6-digit integer binary number(-1 to terminate): ");
    scanf("%d",&x);
    while(x != -1 ){

            while(x > 111111){
                    printf("enter a 6-digit integer binary number(-1 to terminate): ");
                    scanf("%d",&x);
            }
            first = x / 100000 ;
            second =(x%100000)/10000;
            third = ((x%100000)%(10000))/1000;
            forth = (((x%100000)%(10000))%(1000))/100;
            fifth = ((((x%100000)%(10000))%(1000))%100)/10;
            sixth = ((((x%100000)%(10000))%(1000))%100)%10;
    int y = sixth * 1+fifth * 2 + forth * 4 + third * 8 + second * 16 + first * 32;
    printf("the decimal equivalent is %d \n",y);
    printf("enter a 6-digit integer binary number(-1 to terminate): ");
    scanf("%d",&x);
    }
    return 0;
}
