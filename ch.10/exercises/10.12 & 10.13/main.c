#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);
unsigned int y = 0;
char unpackCharacters(void);
void packCharacters(char c);
int main(void)
{

    for(int i = 0 ; i<4;i++)
    {
        packCharacters(i);
    }

    char y[4];

    for(int i = 0 ; i<4;i++)
    {
        y[i] = unpackCharacters();
        printf("****%d****\n",y[i]);
    }

    return 0 ;
}

void displayBits(unsigned int value)
{
    unsigned int displayMask = 1<<31;

    printf("%u = ",value);

    for(unsigned int c = 1 ; c<= 32 ; ++c)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<=1;

        if(c%8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}

void packCharacters(char c)
{
y <<=8;
        y |=c;
        displayBits(y);

}

char unpackCharacters(void)
{
    char c = 0;
    static unsigned int z = 255;
    c = (char)z&y;
    displayBits(y);
    y >>=8;
    return c;
}











