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


int compare_ages (const void *v1 , const void *v2)
{
    const emp *e1=v1;
    const emp *e2=v2;

    return e1->age-e2->age;
}

int compare_names (const void *v1 , const void *v2)
{
    const emp *e1=v1;
    const emp *e2=v2;

    return strcmp(e1->name,e2->name);
}

int main()
{
    emp emps[2]=
    {
        {"Bob" ,"123 Hope St."   , 45 , 45000.00},
        {"Tony","12 cycle St."   , 99 , 46000.00},
        {"Mary","13 Road St."    , 23 , 20000.00},
        {"Sue" ,"1000 Banana St.", 49 , 45000.00},
        {"Fred","32 Nowhere St." , 51 , 49000.00}
    };

    qsort(emps,5,sizeof emps[0],compare_ages);

    for(int i = 0 ; i <5 ; i++)
        printf("%-10s is aged %d\n",emps[i].name,emps[i].age);

    qsort(emps,5,sizeof emps[0],compare_names);

    for(int i = 0 ; i <5 ; i++)
        printf("%-10s\n",emps[i].name);

    return 0;
}


