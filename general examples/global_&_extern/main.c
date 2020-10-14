//why it worked ?! because a is global and because it's declared before it's used
//even though, the definition is below it's first usage
#include <stdio.h>
#include <stdlib.h>

int main()
{
    extern int a ;//declaration
    printf("%d",a);

    return 0 ;
}
int a = 20 ;//definition
