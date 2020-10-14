#include <stdio.h>
#include <stdlib.h>

int main (void)

{

    float average ;
    int total ;
    int grade ;
    unsigned int counter ;

    counter = 0 ;
    total = 0 ;

    printf("enter grade from 0 to 100 , 101 to terminate:  ");
    scanf("%d",&grade);

    while(grade != 101){
        total = total + grade ;
        counter = counter + 1 ;
        printf("enter grade from 0 to 100 , 101 to terminate:  ");
    scanf("%d",&grade);
    }

    if(grade = 101){
        average = (float)total/counter;
        printf("the average value of grades is %0.2f",average);
    }

    else{
        printf("no grades was entered");
    }

    return 0 ;
}
