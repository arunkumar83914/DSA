#include<stdio.h>
int sum(int n);
int main()
{
    int a,r;
    printf("enter a number");
    scanf("%d",&a);
    r=sum(a);
    printf("The sum of natural numbers up to %d is = %d",a,r);
    return 0;
}
// int sum(int n)
// {
//     if(n>0)
//         return n+sum(n-1);
//     else
//         return 0;
// }
// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int a,r;
//     printf("enter a number");
//     scanf("%d",&a);
//     r=fact(a);
//     printf("The fact of = %d",r);
// }
// int fact(int n)
// {
//     if(n>0)
//         return(n*fact(n-1));
//     else
//         return 1;
// // }
// #include<stdio.h>
// int fibo(int);
// int main()
// {
//     int a,r,i;
//     printf("enter a number");
//     scanf("%d",&a);
//     for(i=0;i<a;i++)
//     {   
//     r=fibo(i);
//     printf("%d\t",r);
//     }
// }
// int fibo(int n)
// {
//     if(n==0)
//     return 0;
//     else if(n==1)
//     return 1;
//     else
//     return(fibo(n-1)+fibo(n-2));
// }
// #include<stdio.h>
// int sum=0;
// int b;
// int reverse(int);
// int main()
// {
//     int a,r,i;
//     printf("enter a number");
//     scanf("%d",&a);
//     r=reverse (a);
//     printf("reverse is = %d",r);
// }
// int reverse(int n)
// {
//     if(n>0)
//     {
//     b=n%10;
//     sum=sum*10+b;
//     reverse(n/10);
//     }
//     else
//     return sum;
// }
// #include<stdio.h>
// void A (int n)
// {
//     if(n==0)
//     return n;
//     else
//     {
//         printf("%d\n",n);
//         A (n-1);
//     }
// }
// main()
// {
//     A(6);
// }
// #include<stdio.h>
// void A (int n)
// {
//     if(n==0)
//     return n;
//     else
//     {
//         A(n-1);
//         printf("%d\n",n);
//     }
// }
// main()
// {
//     A(6);
// }





