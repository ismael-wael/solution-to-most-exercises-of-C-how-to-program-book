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
            if(grade== 'a' || grade=='A'){
                ++acount;
            }
            else if(grade == 'b' || grade == 'B'){
                ++bcount;
            }
            else if(grade == 'c' || grade == 'C'){
                ++ccount;
            }
            else if(grade == 'd' || grade == 'D'){
                ++dcount;
            }
            else if(grade == 'f' || grade == 'F'){
                ++fcount;
            }
            else if(grade == '\n' || grade == '\t' || grade == ' '){
            }
            else{
                printf("%s","incorrect letter grade entered.");
                puts("enter a new grade.");
            }

    }
    puts("\ntotals for each letter grade are:");
    printf("A: %u\n",acount);
    printf("B: %u\n",bcount);
    printf("C: %u\n",ccount);
    printf("D: %u\n",dcount);
    printf("F: %u\n",fcount);
    return 0;
}
