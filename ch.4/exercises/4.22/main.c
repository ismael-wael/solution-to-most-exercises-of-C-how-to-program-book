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
    while((grade = getchar()) != EOF){
            switch (grade){
            case 'A':
            case 'a':
                ++acount;
                break;
            case 'B':
            case 'b':
                ++bcount;
                break;
            case 'C':
            case 'c':
                ++ccount;
                break;
                default:
                printf("%s","incorrect letter grade entered.");
                puts("enter a new grade.");
                break;
            case 'D':
            case 'd':
                ++dcount;
                break;
            case 'F':
            case 'f':
                ++fcount;
                break;
            case '\n':
            case '\t':
            case ' ' :
                break;

            }
    }
    printf("\ntotals for each letter grade are:\n");
    printf("A: %u\n",acount);
    printf("B: %u\n",bcount);
    printf("C: %u\n",ccount);
    printf("D: %u\n",dcount);
    printf("F: %u\n",fcount);
    return 0;
}
