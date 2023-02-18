//Count all even numbers from m to n using while loop
#include<stdio.h>
int main()
{
int m,n,count=0;
printf("Enter m= ");
scanf("%d",&m);
printf("Enter n= ");
scanf("%d",&n);
while(m<=n)
{
if(m%2==0)
count++;
m++;
}
printf("Count of even= %d",count);

return 0;
}
