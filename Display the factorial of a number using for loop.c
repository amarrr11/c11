//Display the factorial of a number using for loop
#include<stdio.h>
int main()
{
int n,i,ft=1;
printf("Enter n= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
ft=ft*i;
}
printf("Factorial of %d= %d",n,ft);
return 0;
}
