#include<stdio.h>
int main()
{
char n[100], h[100], b[100];
int r;
printf("Enter your name: \n");
gets(n);
printf("\n Enter your hobby: \n");
gets(h);
printf("\n Enter your branch: \n");
gets(b);
printf("\n Enter your registration number: \n");
scanf("%d", &r);
printf("your name is: %s", n);
printf("\n");
printf("your hobby is: %s", h);
printf("\n");
printf("your branch is: %s", b);
printf("\n");
printf("your registration number is: %d", r);
return 0;
}