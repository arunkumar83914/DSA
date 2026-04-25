// #include<stdio.h>
// union abc
// {
//     int a;
//     int b;
//     float c;
// }aa;
// int main()
// {
//     aa.a=30;
//     printf("a=%d",aa.a);
//     aa.b=40;
//     printf("b=%d",aa.b);
//     aa.c=30.70;
//     printf("c=%f",aa.c);
// }
// #include<stdio.h>
// int main()
// {
//     enum week r;
//     r=wed;
//     printf("%d",r);
// }
// #include<stdio.h>
// int main()
// {
//     auto int a=10;
//     {
//     int b=20;
//     }
//     printf("%d%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     register int a=10;
//     {
//     register int b=20;
//     }
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a=10;
//     register int *b;
//     b=&a;
//     printf("%d",*b);
// }
// #include<stdio.h>
// int main()
// {
// register int a;
// scanf("%d",&a);
// printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     static int a;
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     increment();
//     increment();
//     increment();
// }
// void increment(void)
// {
//     static int a=10;
//     a++;
//     printf("%d\n",a);
// }
// #include<stdio.h>
// int main()
// {
//     increment();
//     increment();
//     increment();
// }
// void increment(void)
// {
//     int a=10;
//     a++;
//     printf("%d\n",a);
// }
// #include<stdio.h>
// int main()
// {
//     static int a;
//     int b=20;
//     a=b;
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     static int a;
//     int b=20;
//     a=b;
//     printf("%d",a);
// }
// #include<stdio.h>
// extern int a=20;
// int main()
// {
//    printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     extern int a;
//     printf("%d",a);
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,i,s=0;
//     printf("enter the elements");
//     scanf("%d",&n);
//     int *a;
//     a=(int *)malloc(n*(sizeof(int)));
//     for(i=0;i<n;i++)
//     {
//         printf("enter a no");
//         scanf("%d",a+i);
//         s=s+*(a+i);
//     }
//     printf("The sum is = %d",s);
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *a;
//     int n,i;
//     printf("enter the elements");
//     scanf("%d",&n);
//     a=(inta)calloc(n,sizeof(int));
//     for(i=0;i<n;i++)
//     {
//         printf("enter two no");
//         scanf("%d",a+i);
//         s=s+*(a+i);
//     }
//     printf("The sum is = %d",s);
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *address;
// }*p;
// void create (void)
// {
//     struct node *q,*r;
//     q=p;
//     int d;
//     printf("Enter a data");
//     scanf("%d",&d);
//     if(p==NULL){
//         p=malloc(sizeof(struct node));
//         p->data=d;
//         p->address=NULL;
//     }
//     else
//     {
//         while(q->address!=NULL)
//         q=q->address;
//         r=malloc(sizeof(struct node));
//         q->address=r;
//         r->data=d;
//         r->address=NULL;
//     }
// }
// void display(void)
// {
//     struct node *q;
//     q=p;
//     while(q!=NULL){
//         printf("%d\t",q->data);
//         q=q->address;
//     }
// }
// int main()
// {
//     p=NULL;
//     create();
//     create();
//     create();
//     display();
// }
