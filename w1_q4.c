#include<stdio.h>
int main()
{
float r, D, C, A;
printf("enter the radius of circle: \n");
scanf("%f", &r);
D = 2 * r;
C = 2 * 3.14 * r;
A = 3.14 * r * r;
printf("Diameter is: %f", D);
printf("\n");
printf("Circumference is: %f", C);
printf("\n");
printf("Area is: %f", A);
return 0;
}