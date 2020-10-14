#include <stdio.h>
#include <stdlib.h>

void useLocal (void);
void useStaticLocal (void);
void useGlobal (void);

int x = 1;

int main()
{
    int x = 5;
    printf("the variable x seen by main is %d\n",x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\nthe variable x seen by main is %d\n",x);

    return 0;
}


void useLocal (void)
{
    int x = 25;
    printf("\nthe local variable in function useLocal before increment is %d\n",x);
    x++;
    printf("\nthe local variable in function useLocal after increment is %d\n",x);
}
void useStaticLocal (void)
{

    static int x = 50;
    printf("\nthe static local variable in function useStaticLocal before increment is %d\n",x);
    x++;
    printf("\nthe static local variable in function useStaticLocal after increment is %d\n",x);
}
void useGlobal (void)
{
    printf("\nthe global variable in function useGlobal before increment is %d\n",x);
    x*=10;
    printf("\nthe global variable in function useGlobal after increment is %d\n",x);

}
