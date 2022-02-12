#include<stdio.h>
void main()
{
int n, a, b, A, M, D, S;
printf("enter two numbers: \n");
scanf("%d %d", &a, &b);
A = a + b;
M = a * b;
D = a / b;
S = a - b;
printf("enter choice: \n");
scanf("%d", &n);
switch (n)
{
case 1:
printf("sum: %d", A);
break;
case 2:
printf("product: %d", M);
break;
case 3:
printf("quotient: %d", D);
break;
case 4:
printf("difference: %d", S);
break;
}
}