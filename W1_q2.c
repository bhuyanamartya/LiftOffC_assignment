#include<stdio.h>
void main()
{
int a, b;
printf("enter two numbers:\n");
scanf("%d %d", &a, &b);
if(a > b)
{
printf("greater is %d", a);
}
else
{
printf("greater is %d", b);
}
}