#include<stdio.h>
void Factorial(int);
void main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  Factorial(n);
  return 0;
}
void Factorial(int num)
{
  int fact=1, i;
  for(i=1;i<num;i++)
  {
    fact=fact*num;
  }
  printf("factorial of given number is:%d",fact);
}
