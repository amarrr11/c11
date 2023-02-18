//Count all even numbers from m to n using for loop
#include<stdio.h>
int main()
{
int m,n,count=0;
printf("Enter m= ");
scanf("%d",&m);
printf("Enter n= ");
scanf("%d",&n);
for(;m<=n;m++)
{
if(m%2==0)
{count++;}
}
printf("Count of even= %d",count);

return 0;
}
