#include <stdio.h>
#include <stdlib.h>
int toQualityPoints(int average);
int main()
{
    int x ;
    printf("enter average point(1 > 100) :");
    scanf("%d",&x);
    printf("%d",toQualityPoints(x));

    return 0;
}

int toQualityPoints(int average)
{
    if(average>=90){
        return 4;
    }
    else if (average >= 80 && average < 90){
        return 3 ;
    }
    else if (average >=70 && average < 80 ){
        return 2 ;
    }
    else if (average >=60 && average <70){
        return 1;
    }
    else{
        return 0;
    }

}
