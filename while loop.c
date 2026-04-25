// #include<stdio.h>
// int main()
// {
//     int a,b,s=0;
//     printf("enter a no");
//     scanf("%d",&a);
//     while(a>0)
//     {
//         b=a%10;
//         s=s+b;
//         a=a/10;
//         printf("The sum of digit = %d",s);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,s=0;
//     printf("enter a no");
//     scanf("%d",&a);
//     while(a>0)
//     {
//         b=a%b;
//         s=s*10+b;
//         a=a/10;
//         printf("The reverse no = %d",s);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,s=0,t;
//     printf("enter a no");
//     scanf("%d",&a);
//     t=a;
//     while(a>0)
//     {
//         b=a%10;
//         s=s*10+b;
//         a=a/10;
//     }
//     if(t==s)
//     printf("Palindrome no");
//     else
//     printf("Not Palindrome");
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,s=0,t;
//     printf("enter a no");
//     scanf("%d",&a);
//     t=0;
//     while(a>0)
//     {
//         b=a%10;
//         s=s+b*b*b;
//         a=a/10;
//     }
//     if (t==s)
//     printf("Armstrong");
//     else
//     printf("Not Armstrong");
// }
// #include<stdio.h>
// int main()
// {
//     int a=2;
//     do
//     {
//         printf("%d\n",a);
//         a=a+2;
//     }
//     while(a<20);
// }