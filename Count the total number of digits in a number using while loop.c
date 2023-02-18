//Count the total number of digits in a number using while loop
#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter n= ");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("Count= %d",count);
return 0;
}
