#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],mini,size,c,loc=1;
printf("\nenter the no of element");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d",&a[c]);
mini=a[0];
for(c=1;c<size;c++)
{
if(a[c]<mini)
{
mini=a[c];
loc=c+1;
}
}
printf("\n element present in location",loc,mini);
getch();
}
