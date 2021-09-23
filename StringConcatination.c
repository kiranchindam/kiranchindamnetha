#include<stdio.h>
void  string concatination(char*,char*);
void main()
{
  char str1[20],str2[20];
  printf("enter string1");
  gets(str1);
  printf("enter string2");
  gets(str2);
  string concatination(str1,str2);
  printf("concatination of string is %s \n",str1);
}
void string concatination(char* str1,char* str2)
{
  int i=0;
  while(str1[i]!='\0')
  {
    i++;
  }
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    i++;
    j++;
  }
  str[i]='\0';
}
