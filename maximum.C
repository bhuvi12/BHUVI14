#include<stdio.h>
int main()
{
int a[150],max,size,loc=1,n;
printf("\n enter the num ");
scanf("%d",&size);
printf("enter size",size);
for(n=1;n<size;n++)
{
if(a[n]<max)
{
max=a[n];
loc=n+1;
}
}
printf("\n element present is location%d and its valueis %d\n",loc,max);
return 0;
}
