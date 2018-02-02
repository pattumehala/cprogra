#include<stdio.h>
int main()
{
int low,high,count,i;
printf("Enter the two numbers(interval):",low,high);
scanf("%d%d",&low,&high);
printf("Even number between %d and %d is:",low,high);
for(i=low;i<=high;++i)
{
count=i%2;
if(count==0)
{
printf("%d",i);
}
}
return 0;
}
