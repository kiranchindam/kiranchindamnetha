#include<stdio.h>
void main()
{
  int num,rem=0,rev=0;
  printf("enter a number");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("Reverse of given number is%d ",rev);
}
