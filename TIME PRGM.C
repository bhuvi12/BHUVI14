#include<stdio.h>
#include<conio.h>
void main()
{
int hours,minutes,total_minutes;
printf("\n enter the time in hours and minutes:");
printf("\n hours:\t");
scanf("%d",&hours);
printf("minutes:\t");
scanf("%d",&minutes);
total_minutes=(hours*60)+minutes;
printf("\n   total time in minutes is:\t %d\t",total_minutes);
getch();
}
