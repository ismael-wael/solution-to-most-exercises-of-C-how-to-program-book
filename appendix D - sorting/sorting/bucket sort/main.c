//bucket sort works only on +ve numbers
//that code only works for (0 ---> 999)

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20     //size of the array i want to sort
int main()
{
    int x[SIZE] = {10,34,1,4,2,6,3,50,77,1,20,45,300,300,6,200,255,782,720,900};

    for(size_t i = 0 ; i <SIZE ; i++)
    {
        printf("%d   ",x[i]);
    }

    int y[10][SIZE];
    int counter = 0 ;//to move from ones to tens then hundreds

    while(counter<3)//maximum number in the array < 3*10
    {
        int z[SIZE]={0};//used as counter for times i enter rows in y[][]
        for(size_t i = 0;i<10;i++)
        {
             for(size_t j=0;j<SIZE;j++)
                y[i][j]=-1;
        }
        for(size_t i = 0 ; i <SIZE ; i++)//index of x[]
        {
             for(size_t j = 0 ; j <10 ; j++)//(j) is the index of y[][]
             {
                switch(counter)
                {
                case 0 ://ones
                    if((x[i]>9?x[i]%10:x[i])==j)
                    {
                       y[j][z[j]]=x[i];
                       z[j]++;
                    }
                    break ;
                case 1 ://tens
                    if((x[i]>99?(x[i]/10)%10:x[i]/10)==j)
                    {
                       y[j][z[j]]=x[i];
                       z[j]++;
                    }
                    break ;
                case 2 ://hundreds
                    if(x[i]/100==j)
                    {
                        y[j][z[j]]=x[i];
                        z[j]++;
                    }
                }

             }
         }
         //copy y[][] to x[]
         for(size_t i=0,k=0;(i<10)&&(k<SIZE);i++)
         {
              for(size_t j=0;j<SIZE;j++)
              {
                 if(y[i][j]!=-1)
                 x[k++]=y[i][j];
              }
         }

         counter++;
    }
    puts("");
    puts("");
    for(size_t i = 0 ; i <SIZE ; i++)
    {
        printf("%d   ",x[i]);
    }

    return 0;
}
