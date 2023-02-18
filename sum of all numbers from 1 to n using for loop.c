//sum of all numbers from 1 to n using for loop
#include<stdio.h>
int main()
{
int n,sum=0,i;
printf("Enter n= ");
scanf("%d",&n);

for(i=1;i<=n;i++)
sum=sum+i;

printf("Sum of 1 to %d= %d",n,sum);
return 0;
}
