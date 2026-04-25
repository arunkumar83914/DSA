// #include<stdio.h>
// int main()
// {
//     int a[10],s,i,f=0;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("Enter the element which yuo want to search");
//     scanf("%d",&s);
//     for(i=0;i<10;i++)
//     if(a[i]==s)
//     {
//         printf("No found in position = %d",i+1);
//         f=1;
//         break;
//     }
//     if(f==0)
//     printf("Not found");
// }
#include<stdio.h>
int main()
{
    int a[10],s,i,f=0,l=0,h=9,mid;
    printf("enter ten no");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter the element which yuo want to search");
    scanf("%d",&s);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==s)
        {
        printf("No found in position = %d",i+1);
        f=1;
        break;
    }
    else if(a[mid]>s)
    h=mid-1;
    else
    l=mid+1;
    }
    if(f==0)
    printf("No found in the list");
}