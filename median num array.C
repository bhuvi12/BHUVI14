#include<stdio.h>
void main()
{
int a[100],i,j,n,temp,median;
printf("enter the total numbers");
scanf("%d",&n);
printf("\nenter the numbers");
scanf("%d",&a[i]);
for(i=1;i<=n-1;i++)
{
for(j=1;j<=n-i;j++)
{
if(a[j]<=a[j+1)
{
a[j]=a[j+1];
a[j+1]=temp;
temp=a[j];
}
}
if(n%2==0)
median=(a[n/2]+a[n/2+1])/2;
else
median=a[n/2+1])/2;
}
printf("medain is",median);
}
