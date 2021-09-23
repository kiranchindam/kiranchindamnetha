#include<stdio.h>
void main()
{
    int i, a[10], ele;
    int first, last, mid;
    for (i = 0;i < 9;i++)
    {
        printf("enter array elements");
        scanf_s("%d", &a[i]);
    }
    printf("enter element to search");
    scanf_s("%d", &ele);
    first = 0;
    last = 9;
    while (first < last)
    {
        mid = (first + last) / 2;
        if (ele == a[mid])
        {
            printf("element found at position%d\n", mid + 1);
            break;
        }
        else if (ele > a[mid])
        {
            first = mid + 1;
        }
        else if (ele < a[mid])
        {
            last = mid - 1;
        }
        }
    }

