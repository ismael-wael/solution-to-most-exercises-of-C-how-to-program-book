#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct employee
{
    char name[31];
    char address[101];
    int age;
    float salary ;
};

typedef struct employee emp ;

int main()
{
    emp emps[2]=
    {
        {"Bob","123 Hope St." , 45 , 45000.00},
        {"Fred","32 Nowhere St." , 51 , 49000.00}
    };

    emp *elder ;
    oldest(emps,&elder);

    printf("the oldest employee is aged %d\n",elder->age);

    return 0;
}

void oldest(emp emps[],emp **e_ptr)
{
    if(emps[0].age > emps[1].age)
        *e_ptr = &(emps[0]);
    else
        *e_ptr = &(emps[1]);
}

