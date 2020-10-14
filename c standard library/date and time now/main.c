//date and time now
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t now ;
int main()
{

now = time(NULL);
printf("%s",ctime(&now));
    return 0;
}


