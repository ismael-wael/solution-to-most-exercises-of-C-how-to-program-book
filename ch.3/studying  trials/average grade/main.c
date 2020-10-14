#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0 ;
    int counter = 0 ;
    int average ;
    unsigned int grade ;
    int x ;
    printf("%s","enter the number of students :");
    scanf("%d",&x);
    while(counter <= x){
        printf("%s","enter the grade of each student from 0 to 100");
        scanf("%d",&grade);
        total = total + grade ;
        counter = counter + 1 ;
    }
    average = total / x ;
    printf("the average value of grade for students is %d",average);
  return 0 ;
}
