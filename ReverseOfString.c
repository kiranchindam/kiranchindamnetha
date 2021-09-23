#include<stdio.h>
void main()
{
  char str[20];
  int i=0,j=0;
  printf("enter a string");
  gets(str);
  while(str[i]!='\0')
  {
    i++;
  }
  int len=i;
  i--;
  printf("entered string is :%s",str);
  for(j=0;j<len/2;j++;i--)
  {
    char temp;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  printf("Reverse of given string is:%s\n",str);
}
