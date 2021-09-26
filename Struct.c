#include<stdio.h>
struct Student
{
  int no;
  char name[20];
  float height;
};
int main()
{
struct  Student s1;
  printf("Enter number");
  scanf("%d",&no);
  printf("Enter Name");
  while(getchar()!='\n');
  gets_s(s1.name);
  printf("Enter Height");
  scanf_s("%f",&height);
  printf("number=%d\n name=%c\n height=%f\n,s1.no,s1.name,s1.height);
         return 0;
 }
         
