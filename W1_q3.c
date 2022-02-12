#include<stdio.h>
int main()
{
int a, b;
printf("enter a number:\n");
scanf("%d", &a);
b = a % 2;
switch (b)
{
case 0:
printf("even");
break;
case 1:
printf("odd");
break;
}
return 0;
}