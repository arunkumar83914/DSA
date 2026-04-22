// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a no");
//     scanf("%d",&a);
//     if(a%2==0)
//     printf("Even no");
//     else
//     printf("Odd no");
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three no");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b&&a>c) 
//     printf("%d is greater",a);
//     else if (b>a&&b>c) 
//     printf("%d is greater",b);
//     else 
//     printf("%d is greater",c);
// }

// #include<stdio.h>
// int main()
// {
//     int m1,m2,m3,m4,m5,p;
//     printf("Enter five subject marks");
//     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
//     p=(m1+m2+m3+m4+m5)/5;
//     printf("Percentage=%d",p);
//     if(p>80)
//     printf("Grade S");
//     else if(p>70)
//     printf("Grade A");
//     else if(p>60)
//     printf("grade B");
//     else if(p>50)
//     printf("Grade C");
//     else
//     printf("Grade F");
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter the unit");
//     scanf("%d",&a);
//     if (a>400)
//     b=(a-400)*5+950;
//     else if(a>300)
//     b=(a-300)*4+550;
//     else if(a>200)
//     b=(a-200)*3+250;
//     else if (a>100)
//     b=(a-100)*2+50;
//     else if(a>50)
//     b=(a-50)*1;
//     else
//     b=0;
//     printf("\n The bill is = %d",b);
// }

// #include<stdio.h>
// int main()
// {
//     int d;
//     printf("enter the day name");
//     scanf("%d",&d);
//     switch (d)
//     {
//         case1:
//         printf("Monday");
//         break;
//         case2:
//         printf("Tuesday");
//         break;
//         case3:
//         printf("Wednesday");
//         break;
//         case4:
//         printf("Thursday");
//         break;
//         case5:
//         printf("Friday");
//         break;
//         case6:
//         printf("Saturday");
//         break;
//         case7:
//         printf("Sunday");
//         break;
//         default:
//         printf("invalid input");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     switch(5<<1)
// {
//     default:
//     printf("Hi");
//     case1:
//     printf("Hello");
//     case2:
//     printf("Bye");
// }
// }
// #include<stdio.h>
// int main()
// {
//     int a=10;
//     if(a>5)
//     printf("Hello");
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("enter two no");
//     scanf("%d%d",&a,&b);
//     printf("\n1.add\n2.sub\n3.mul\n4.div");
//     printf("enter the choice");
//     scanf("%d",&c);
//     switch(c)
//     {
//         case1:
//         d=a+b;
//         break;
//         case2:
//         d=a-b;
//         break;
//         case3:
//         d=a*b;
//         break;
//         case4:
//         d=a/b;
//         break;
//         default:
//         printf("wrong choice");
//     }
//     printf("Answer is = %d",d);
// }

// #include<stdio.h>
// int main()
// {
//     goto abc;
//     printf("one");
//     printf("two");
//     abc:
//     printf("three");
// }

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     abc:
//     printf("\nArun");
//     i=i+1;
//     if(i<=5)
//     goto abc;
// }

// #include<stdio.h>
// int main()
// {
//     int a,i,f=1;
//     printf("enter a no");
//     scanf("%d",&a);
//     for(i=1;i<a;i++)
//     f=f+i;
//     printf("the factorial is = %d",f);
// }

// #include<stdio.h>
// int main()
// {
//     int a,i,f=0;
//     printf("enter a no");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     f=f+i;
//     printf("The sum is = %d",f);
// }

// #include<stdio.h>
// int main()
// {
//     int a,i,f=0;
//     printf("enter a no");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     if(a%i==0)
//     f=f+i;
//     if(f==2)
//     printf("Prime no");
//     else
//     printf("Not prime");
//     }

// #include<stdio.h>
// int main()
// {
//     int n,a,b,c,i;
//     printf("enter the term");
//     scanf("%d",&n);
//     a=0;
//     b=1;
//     printf("%d\t%d",a,b);
//     for(i=1;i<=n-2;i++);
//     {
//         c=a+b;
//         printf("\t%d",c);
//         a=b;
//         b=c;
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a,i;
//     printf("enter a no");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     if(a%i==0)
//     printf("%d",i);
// }




