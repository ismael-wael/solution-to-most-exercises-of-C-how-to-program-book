#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned int acount = 0 ;
    unsigned int bcount = 0 ;
    unsigned int ccount = 0 ;
    unsigned int dcount = 0 ;
    unsigned int fcount = 0 ;
    puts("enter the letter grades.");
    puts("enter the EOF character to end input.");
    int grade ;
    while((grade = getchar())!= EOF){

        if(grade == 'A'||grade == 'a'){
            ++acount;
            continue ;
        }
        if(grade == 'B' || grade == 'b')
        {
            ++bcount;
            continue;
        }
        if(grade=='C'||grade=='c')
        {
            ++ccount;
            continue;
        }
        if(grade =='D'||grade=='d')
        {
            ++dcount;
            continue;
        }
        if(grade =='F'||grade=='f')
        {
            ++fcount;
            continue;
        }
        if(grade == '\n'||grade=='\t'||grade==' ')
        {
            continue;
        }

        printf("%s","incorrect letter grade entered.");
        puts("enter a new grade.");
    }
    puts("\ntotals for each letter grade are:");
    printf("A: %u\n",acount);
    printf("B: %u\n",bcount);
    printf("C: %u\n",ccount);
    printf("D: %u\n",dcount);
    printf("F: %u\n",fcount);
    return 0;
}
