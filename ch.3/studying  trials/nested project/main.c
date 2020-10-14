#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int passed = 0 ;
    int failed = 0 ;
    int i = 1 ;
    while(i <=10){
        printf("enter grade of the ten students either 1 or 2 : \n");
        scanf("%d",&x);
        if(x==1){
            passed = passed + 1 ;
        }
        if(x==2){
            failed = failed + 1 ;
        }
        i = i +1;
    }
    printf("number of passed students is %d\n",passed);
    printf("number of failed students is %d\n",failed);
    if (passed > 8){
        printf("bonus to the instructor\n");
    }
    return 0;
}
