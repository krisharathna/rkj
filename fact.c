#include<stdio.h>
int main()
{
int n,fact=0,i;
printf("\nEnter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
