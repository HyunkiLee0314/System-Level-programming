#include<stdio.h>

int prime(int x)
{
for(int i=2;i<x;i++)
{
if(x%i==0)
return 0;
}
return 1;
}
int main()
{
int x=2;
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
if(n<=0)
{
printf("Invalid");
return 1;
}
printf("First %d prime numbers are: ",n);
for(int i=1;i<=n;i++)
{
while(prime(x)==0)
x++;
printf("%d ",x);
x++;
}
return 0;
}
