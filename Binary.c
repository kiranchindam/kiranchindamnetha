#include<stdio.h>
void main()
{
     int a[10],i,ele;
    int first,last,mid;
    for(i=0;i<9;i++)
    {
        printf("enter array elements:");
        scanf("%d",&a[i]);
    }
    printf("enter element to search");
    scanf("%d",&ele);
    first=0;
    last=9;
    for(i=0;i<9;i++)
    {
        mif=(first+last)/2;
        if(ele==a[mid])
        {
            printf("element found at position:%d",mid+1);
            break;
        }
        else if(ele>a[mid])
        {
            first=mid+1;
        }
        else if(ele<a[mid])
        {
            last=mid-1;
        }
    }
                                    
