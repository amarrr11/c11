//Display the factorial of a number using while loop
#include<stdio.h>
int main()
{
int n,i=1,ft=1;
printf("Enter n= ");
scanf("%d",&n);
while(i<=n)
{
ft=ft*i;
i++;
}
printf("Factorial of %d= %d",n,ft);
return 0;
}
