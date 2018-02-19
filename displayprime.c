#include<stdio.h>
int main()
{
int i,n;
printf("\nenter the initial number");
scanf("%d",&i);
printf("\nenter the final number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%i!=0 || i%1!=0 || i%2!=0)
{
printf("\n the prime numbers are:%d",i);
}
else
{
printf("\n no");
}
}
return 0;
}
