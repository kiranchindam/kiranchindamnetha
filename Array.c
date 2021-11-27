#include<stdio.h>
void main()
{
  int a[10],i,n;
  printf("enter the array size:");
  scanf("%d",&n);
  printf("enter elements into array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("elements in array are");
  for(i=0;i<n;i++)
  {
    scanf("%d",a[i]);
  }
}
