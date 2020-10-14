/*the simple explanation is :
suppose i have 5 disks in peg 1 and i want to move them to peg 3;
now for the fifth disk to move to peg 3,all 4 disks (1,2,3,4)must be in
peg 2,and for disk 4 to move to peg 2 all 3 disks (1,2,3)must be in peg 3,
for disk 3 to be in peg 3 disks(1,2)must be in peg 2,for disk 2 to be in peg 2
,disk 1 has to be in peg 3
that's the way down (disassemble the tower is peg 1 )
the same goes the way up ( when building the tower is peg 3 )
notice that every time the problem becomes simpler till we reach the base i.e the first disk up
this is what's mean to think recursively..now i simplified the problem,here's the code : */
#include <stdio.h>
#include <stdlib.h>
int towersOfHanoi(int n , int initial , int temp , int end);
int main()
{
    printf("enter number of disks,initial peg,temporary peg, and final peg :");
    int x,y,z,t;
    scanf("%d %d %d %d",&x,&y,&z,&t);
    towersOfHanoi(x,y,z,t)
    return 0;
}
//n=3 ; initial = 1 ; final = 3 ; temp = 2;
int towersOfHanoi(int n , int initial , int temp , int end)
{

}
