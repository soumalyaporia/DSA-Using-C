#include<stdio.h>

int main()
{
    int arr[100],n,i,flag=0,key;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {

        printf("enter the %d element:",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {

        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {

        printf("Element found\n");

        printf("Element index position:%d\n",i);

        printf("Element normal position:%d",i+1);
    }

    else
    {
        printf("not found");
    }
    return 0;
}