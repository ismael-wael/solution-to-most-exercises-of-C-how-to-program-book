//that code works correctly but u has to input the exact size of array
//if six characters then six, no more or less
#include <stdio.h>
#include <stdlib.h>
#define SIZE  25

int testPalindrome(char y[]);
char stringReverse(char x[],size_t size);

int main()
{
    //radar
    //able was i ere i saw elba
    //a man a plan a canal panama
    char array[SIZE]="able was i ere i saw elba";
    for(size_t i = 0 ; i<SIZE ; i++)
        printf("%c",array[i]);
    puts("");
    printf("%d",testPalindrome(array));
    return 0;
}

int testPalindrome(char y[])
{
    char z[SIZE];
    for(size_t i = 0 ; i<SIZE ; i++)
        z[SIZE-i-1]=stringReverse(y,i);
    for(size_t i = 0 ; i<SIZE ; i++)
        printf("%c",z[i]);
    puts("");
    size_t i,j;
    for( i=0,j=0;i<SIZE,j<SIZE;i++,j++)
    {
        y[i]==' '?i++:i;
        z[j]==' '?j++:j;
        if(y[i]==z[j])
            continue;
        else
            break;
    }
    if(i==SIZE)
        return 1 ;
    else
        return 0 ;
}

char stringReverse(char x[],size_t size)
{
    if(x[size]=='\0')
        return;
    else
       stringReverse(x,size+1);
        return x[size];
}





