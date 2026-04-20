// #include<stdio.h>
// int main()
// {
//     int a[10],i;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("The value are\n");
//     for(i=0;i<10;i++)
//     printf("%d\n",a[i]);
// }

// #include<stdio.h>
// int main()
// {
//     int a[10],i,s=0,avg;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     {
//     scanf("%d",&a[i]);
//     s=s+a[i];
//     }
//     avg=s/10;
//     printf("Sum is = %d",s);
//     printf("\n Average = %d",avg);
// }

// #include<stdio.h>
// int main()
// {
//     int a[10],i,e=0,o=0;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++)
//     if(a[i]%2==0)
//     e=e+1;
//     else 
//     o=o+1;
//     printf("Total even no = %d",e);
//     printf("\n Total odd no = %d",o);
// }

// #include<stdio.h>
// int main()
// {
//     int a[10],i,max;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     max=a[0];
//     for(i=0;i<10;i++)
//     if(a[i]>max)
//     max=a[i];
//     else
// }

#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter nine no");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("The matrix is\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
}

// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     printf("enter a no");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("The transport of matrix is\n");
//     for(i=0;i<3;i++)
//     {
//         printf("\n");
//         for(j=0;j<3;j++)
//         printf("%d\t",a[j][i]);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j,s;
//     printf("enter a no");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     if(i==j)
//     s=s+a[i][j];
//     printf("The sum of diagonal elements = %d",s);
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j,s=0;
//     printf("enter a no");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     if(i+j==2)
//     s=s+a[i][j];
//     printf("The sum of diagonal elements = %d",s);
// }


