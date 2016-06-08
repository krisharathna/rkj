#include<stdio.h>
int main()
{
char a[20];
int i,j;
printf("\nEnter the string");
scanf("%s",a);
i=0;
j=strlen(a)-1;
while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
printf("\nreversed string is",%s);
return 0;
}
