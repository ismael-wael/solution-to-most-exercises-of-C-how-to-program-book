#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100]={6,7,8,9,8,7,8,9,8,9,
                7,8,9,5,9,8,7,8,7,8,
                6,7,8,9,3,9,8,7,8,7,
                7,8,9,8,9,8,9,7,8,9,
                6,7,8,7,8,7,9,8,9,2,
                7,8,9,8,9,8,9,7,5,3,
                5,6,7,2,5,3,9,4,6,4,
                7,8,9,6,8,7,8,9,7,8,
                7,4,4,2,5,3,8,7,5,6,
                4,5,6,1,6,5,7,8,7,7};
    int b[200];
    size_t i,j;
    for(i=100,j=0;i<200;i++,j++){
        b[i]=a[j];
    }
    for(i=100;i<200;i++){
        printf("%d\t",b[i]);
        if(i%10==0){
            puts("");
        }
    }
    return 0;
}

