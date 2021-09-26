#include<stdio.h>
union Student
{
  int no;
  char name;
  float height;
}
int main()
{
  union Student s1;
  printf("enter no");
  scanf("%d",&s1.no);
  printf("enter name");
  while(getchar()!='\n');
  gets_s(&s1.name);
  printf("enter height");
  scanf("%f",&s1.height);
  printf("number=%d\n name=%c\n height=%f\n, s1.no,s1.name,s1.height);
         return 0;
}
  
