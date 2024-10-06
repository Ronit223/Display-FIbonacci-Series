#include<stdio.h>
#include<conio.h>

void main()

{
 int a, b, sum, sum1;
 clrscr();
 printf("Enter First Number: ");
 scanf("%d", &a);
 printf("Enter Second NUmber: ");
 scanf("%d", &b);
 printf("The fibonacci series is given below:\n%d\n%d\n",a,b);
 while ( sum1 < 28000 ){
  sum = a +b;
  printf("%d\n",sum);
  sum1 = sum + b;
  printf("%d\n", sum1);
  a = sum;
  b = sum1;
 }
 getch();
}
