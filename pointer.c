// #include<stdio.h>
// void swap(int,int);
// int main()
// {
//     int a,b;
//     printf("enter two no");
//     scanf("%d%d",&a,&b);
//     swap(a,b);
// }
// void swap (int c,int d)
// {
//     int e=c;
//     c=d;
//     d=e;
//     printf("After swapping c = %d,d=%d",c,d);
// }
// #include<stdio.h>
// void swap(int*,int*);
// int main()
// {
//     int a,b;
//     printf("enter two no");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("After swapping a=%d,b=%d",a,b);
// }
// void swap (int*c,int*d)
// {
//     int e=*c;
//     *c=*d;
//     *d=e;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i,j;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++)
//     if(a[j]>a[j+1])
//     {
//         int t;
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }
//     printf(" The sorted array is\n");
//     for(i=0;i<10;i++)
//     printf("%d\t",a[i]);
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i,j,f=0;
//     printf("enter ten no");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++)
//     {
//     for(j=0;j<10-i-1;j++)
//     if(a[j]>a[j+1])
//     {
//         int t;
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }
//     if(f==0)
//     break;
//     }
//     printf(" The sorted array is\n");
//     for(i=0;i<10;i++)
//     printf("%d\t",a[i]);
// }
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter two no");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After swapping: %d%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     int *p=NULL;
//     printf("%d",*p);
// // }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     void *p;
//     p=&a;
//     printf("%d",*(int*)p);
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     void *p;
//     p = &a;
//     printf("%d",*   p);
// }
// #include<stdio.h>
// int main()
// {
//     int a,i,f=0;
//     for(a=100;a<=500;a++)
//     {
//         for(i=1;i<=a;i++)
//         if(a%i==0)
//         f=f+1;
//         if(f==2)
//         printf("%d\t",a);
//         f=0;
//     }
// }
// #include<stdio.h>
// int main()
// {
//    int *p;
//    printf("%d",*p); 
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     int *p;
//     p = &a;
//     free(p);
//     printf("%d",*p);
// }
// #include<stdio.h>
// int main()
// {
//     int a[]={10,20,30},i;
//     int *p;
//     p=&a;
//     for(i=0;i<3;i++)
//     {
//         printf("%d",*p);
//         p++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[]={10,20,30},i;
//     int *p;
//     p=&a[2];
//     for(i=0;i<3;i++)
//     {
//         printf("%d",*p);
//         p++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i;
//     printf("enter ten elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     array(a[2]);
// }
// void array (int b)
// {
//     printf("third element of array is = %d",b);
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i;
//     printf("enter ten elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     array(a);
// }
// void array (int b)
// {
//     printf("third element of array is = %d",b);
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i;
//     printf("enter ten elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     array(a);
// }
// void array (int b[])
// {

//     int i;
//     printf("The element of in array is \n");
//     for(i=0;i<10;i++)
//     printf("%d\t",b[i]);
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],i;
//     printf("enter ten elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     array(a);
// }
// void array ( int b[])
// {
//     int i,p=0;N=0;
//     for(i=0;i<10;i++)
//     if(b[i]>0)
//     p=p+b[i];
//     else
//     N=N+b[i];
//     printf("The sum of positive no = %d",p);
//     printf("The sum of negative no = %d",N);
// }



// #include<stdio.h>
// void main()
// {
//     int var=7;
//     printf("Value of the variable var is %d\n",var);
//     printf("Memory address of the variable var is %x\n",&var);
// }
// #include<stdio.h>
// void main()
// {
//     int var=7;
//     printf("Value of the variable var is %d\n",var);
//     printf("Memory address of the variable var is %p\n",&var);
// }
// #include<stdio.h>
// int main()
// {
//     int*pc,c;
//     c=5;
//     pc=&c;
//     *pc=1;
//     printf("%d\n",*pc);
//     printf("%d",c);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int*pc,c,d;
//     c=5;
//     d=-15;
//     pc=&c;
//     printf("%d\n",*pc);
//     pc=&d;
//     printf("%d",*pc);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int*pc,c;
//     c=22;
//     printf("Address of c %p\n",&pc);
//     printf("Value of c %d\n\n",c);
//     pc=&c;
//     printf("Address of pointer pc %p\n",&pc);
//     printf("Content of pointer pc %d\n\n",*pc);
//     c=11;
//     printf("Address of pointer pc %p\n",pc);
//     printf("Content of pointer pc %d\n\n",*pc);
//     *pc=2;
//     printf("Address of c %p\n",&c);
//     printf("Value of c %d\n\n",c);
//     return 0;
// }
// #include<stdio.h>
// void mca()
// {
//     int var=10;
//     int* ptr;
//     ptr=&var;
//     printf("Value at ptr=%p\n",ptr);
//     printf("Value at var=%d\n",var);
//     printf("Value at *ptr=%d\n",*ptr);
// }
// int main()
// {
//     mca();
//     return 0; 
// }



// write a c program to add two number using pointer.

// #include<stdio.h>
// int main()
// {
//     int a,b,*c,*d,sum;
//     a=15;
//     b=25;
//     printf("Enter a number");
//     scanf("%d%d",&a,&b);
//     c=&a;
//     d=&b;
//     sum=*c+*d;
//     printf("The sum of the entered numbers is %d\n\n",sum);
//     return 0;
// }



// Write a c program to add two numbers using call by reference. 

// #include<stdio.h>
// void sum (int*,int*);
// int main()
// {
//     int a,b,sum;
//     printf("Enter two no");
//     scanf("%d%d",&a,&b);  
//     sum=(&a,&b);
//     printf("The sum of the entered numbers is a=%d,b=%d",a,b);
//     return 0;
// }
// void sum (int*c,int*d)
// {
//     int sum;
//     sum=*c+*d;
//     return sum;
// }


//  Write a c program to store n number of elements of element in an array and print the element using the pointer.

// #include<stdio.h>
// int main()
// {
//     int a[5],i,j;
//     printf("Enter five no");
//     for(i=0;i<5;i++)
//     scanf("%d",a[i]);
//     for(i=0;i<5;i++)
//     for(j=0;j<5-i-1;i++)
//     if(a[j]>a[j+1])
//     {
//         int t;
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }
//     printf("The sorted array is \aq  `n");
//     for(i=0;i<5;i++)
//     printf("%d\t",a[i]);
// }



















