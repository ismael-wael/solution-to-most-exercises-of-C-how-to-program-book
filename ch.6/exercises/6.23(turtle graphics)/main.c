#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int instruct=0 , loop=1;
    int turtle;
    int x=0 , y =0;//position of the turtle
    int floor[50][50]={0};

    while(instruct != 9)
    {
        printf("enter instruction?");
        printf("\n1 >> pen up(move freely)");
        printf("\n2 >> pen down(write shapes)");
        printf("\n7 >> print the floor");
        printf("\n8 >> clear the floor");
        printf("\n9 >> exit the turtle graphics");
        puts("");
        scanf("%d",&instruct);

        switch(instruct)
        {
            case 1 :// pen up == move freely
                for(size_t i = 0 ; i <20 ; i++)
                {
                    x = rand()%20;
                    y = rand()%20;
                    turtle=floor[x][y];
                }
                break;
            case 2 ://pen down == write shapes
                    printf("enter direction and for how many : ");
                    printf("\n3 >> turn right");
                    printf("\n4 >> turn left");
                    printf("\n5 >> move down");
                    printf("\n6 >> move up");
                    printf("\n10 >> end of data(for 1 time)");
                    puts("");
                while(instruct != 10)
                {
                    scanf("%d %d",&instruct,&loop);
                    for(size_t i = 1 ; i<=loop ; i++)
                    {
                        switch(instruct)
                        {
                             case 3 ://right
                                 turtle = floor[x][y++]=1;
                             break;
                             case 4 ://left
                                 turtle = floor[x][y--]=1;
                             break;
                             case 5 ://down
                                 turtle = floor[x++][y]=1;
                             break;
                             case 6 ://up
                                 turtle = floor[x--][y]=1;
                             break;
                             case 10 ://end of data

                             break;
                         }
                    }

                }
                break;
            case 7 :// print the array
                for(size_t i = 0 ; i <20 ; i++)
                {
                    for(size_t j = 0 ; j <20 ; j++)
                    {
                        floor[i][j]==1?printf("*"):printf(" ");
                    }
                    puts("");
                }
                break;
            case 8 :// clear the array
                for(size_t i = 0 ; i <20 ; i++)
                {
                    for(size_t j = 0 ; j <20 ; j++)
                    {
                        floor[i][j]=0;
                    }
                }
                break;
        }
    }
    return 0;
}



