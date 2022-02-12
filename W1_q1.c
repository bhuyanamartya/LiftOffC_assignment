#include<stdio.h>
int main()
{
char n[100], h[100], b[100];
int r;
printf("Enter your name: \n");
gets(n);
printf("your name is: %s", n);
printf("\n Enter your hobby: \n");
gets(h);
printf("your hobby is: %s", h);
printf("\n Enter your branch: \n");
gets(b);
printf("your branch is: %s", b);
printf("\n Enter your registration number: \n");
scanf("%d", &r);
printf("your registration number is: %d", r);
return 0;
}