//Sum of all digits of a number using for loop
#include<stdio.h>
int main()
{
int n,d,sum=0;
printf("Enter n= ");
scanf("%d",&n);
for(;n!=0;n=n/10)
{
d=n%10;
sum+=d;
}
printf("sum of digits= %d",sum);
return 0;
}
