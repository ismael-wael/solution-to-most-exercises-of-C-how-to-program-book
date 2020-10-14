#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1 ;
    int result ;
    while(student <=10){
        printf("enter result(1=pass,2=fail): ");
        scanf("%d",&result);
        while(result != 1 && result != 2){
            printf("enter result(1=pass,2=fail): ");
            scanf("%d",&result);
        }


        if(result==1){
            passes = passes+1;
        }
        else{
            failures=failures+1;
        }
        student = student+1;
    }
    printf("passed %u\n",passes);
    printf("failed %u\n",failures);
    if (passes>8){
        puts("bonus to instructor");
    }
    return 0;
}
