#include<stdio.h>
void main()
{
  char str[20], i;
  printf("enter a string:\n");
  gets_s(str);
  while(str[i]!='\0')
  {
    i++;
  }
  int len=i;
  i--;
  printf("entered string is:%s\n",str);
  for(j=0;j<len/2;j++,i--)
  {
    char temp;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  printf("Reverse of given string is:%s\n", str);
}
