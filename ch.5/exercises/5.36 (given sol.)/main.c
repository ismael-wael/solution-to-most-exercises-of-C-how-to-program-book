#include <stdio.h>
#include <conio.h>
void transfer(int,char,char,char);
int main()
{
int n;
printf("Recursive Solution to Tower of Hanoi Problem\n");
printf("enter the number of Disks");
scanf("%d",&n);
transfer(n,'1','3','2');
getch();
return 0;
}
void transfer(int n,char from,char to,char temp)
{
if (n>0)
{
transfer(n-1,from,temp,to); /* Move n-1 disk from origin to temporary */
printf("Move Disk %d from %c to %c\n",n,from,to);
transfer(n-1,temp,to,from); /* Move n-1 disk from temporary to origin */
}
return;
}
