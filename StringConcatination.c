#include<stdio.h>
void  stringConcatination(char*,char*);
void main()
{
  char str1[20],str2[20];
  printf("enter string1");
  gets_s(str1);
  printf("enter string2");
  gets_s(str2);
  stringConcatination(str1,str2);
  printf("concatination of string is %s \n",str1);
}
void stringConcatination(char* st1,char* st2)
{
  int i=0;
  while(st1[i]!='\0')
  {
    i++;
  }
  int j=0;
  while(st2[j]!='\0')
  {
    st1[i]=st2[j];
    i++;
    j++;
  }
  st1[i]='\0';
}
