// a program to calculate final velocity and distance travelled
#include <stdio.h>
#include <stdlib.h>
// initializing the main function where c begin execution
int main()
{
    int ini_vel , final_vel , dis , acc , time_elapsed ;
    printf("enter three values : initial velocity ,acceleration and time elapsed\n");
    scanf("%d %d %d",&ini_vel,&acc,&time_elapsed);
    final_vel = ini_vel + acc * time_elapsed ;
    dis = ini_vel * time_elapsed + 0.5 * acc * time_elapsed * time_elapsed ;
    printf("the final velocity is %d\n",final_vel);
    printf("the distance travelled is %d\n",dis);

    return 0;
}// end of main function
