#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter number of salespeople :");
    int n;
    double gross;
    scanf("%d",&n);
    double salary[n];
    int frequency[9]={0};
    size_t i;
    for(i=0;i<n;++i){
        printf("enter salesperson number %d's gross sales :",i+1);
        scanf("%lf",&gross);
        salary[i] = 200 + 0.09*gross;
    }
    for(i=0;i<9;++i){
            if(salary[i]<299){
                ++frequency[0];
                continue;
            }
            if(salary[i]<399&&salary>299){
                ++frequency[1];
                continue;
            }
            if(salary[i]>399&&salary[i]<499){
                ++frequency[2];
                continue;
            }
            if(499<salary[i]&&salary[i]<599){
                ++frequency[3];
                continue;
            }
            if(599<salary[i]&&salary[i]<699){
                ++frequency[4];
                continue;
            }
            if(699<salary[i]&&salary[i]<799){
                ++frequency[5];
                continue;
            }
            if(799<salary[i]&&salary[i]<899){
                ++frequency[6];
                continue;
            }
            if(899<salary[i]&&salary[i]<999){
                ++frequency[7];
                continue;
            }
            if(999<salary[i]){
                ++frequency[8];
            }
    }

    printf("in range 200$ -> 299$ = %d \n",frequency[0]);
    printf("in range 300$ -> 399$ = %d \n",frequency[1]);
    printf("in range 400$ -> 499$ = %d \n",frequency[2]);
    printf("in range 500$ -> 599$ = %d \n",frequency[3]);
    printf("in range 600$ -> 699$ = %d \n",frequency[4]);
    printf("in range 700$ -> 799$ = %d \n",frequency[5]);
    printf("in range 800$ -> 899$ = %d \n",frequency[6]);
    printf("in range 900$ -> 999$ = %d \n",frequency[7]);
    printf("in range 1000$->>>>>>>= %d \n",frequency[8]);



    return 0;
}
