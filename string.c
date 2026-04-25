// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     int i=0;
//     while(a[i]!=NULL)
//     {
//     printf("%c",a[i]);
//     i++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%s",a);
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     char * b;
//     b=a;
//     while(*b!=NULL)
//     {
//         printf("%c",*b);
//         b++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     printf("Enter the string");
//     scanf("%s",a);
//     printf("The string is = %s",a);
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     printf("Enter the string");
//     gets(a);
//     printf("The string is = %s",a);
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%s",a+1);
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%d",strlen(a));
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%d",strrev(a));
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%s",strupr(a));
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello";
//     printf("%s",strlwr(a));
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello",b[10];
//     strcpy(b,a);
//     printf("%s",b);
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello",b[10]="Kanpur";
//     strcat(a,b);
//     printf("%s",a);
// }
// #include<stdio.h>
// int main()
// {
//     char a[]="Hello",b[10]="Kanpur";
//     if(strcmp(a,b)==0)
//     printf("String is same");
//     else
//     printf("Not same");
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0,c=0;
//     printf("enter a string");
//     gets(a);
//     while(a[i]!=NULL);
//     {
//         c=c+1;
//         i=i+1;
//     }
//     printf("Number of character");
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0;
//     printf("enter a string");
//     gets(a);
//     while(a[i]!=NULL)
//     {
//         if(a[i]>=97&&a[i]<=122)
//         a[i]=a[i]-32;
//         i=i+1;
//     }
//     printf("string is upper case = %s",a);
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0,w=0;
//     printf("enter a string");
//     gets(a);
//     while(a[i]!=NULL)
//     {
//         if(a[i]=='   ')
//         w=w+1;
//         i=i+1;
//     }
//     printf("Total words = %d",w+1);
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0,w=0;
//     printf("enter a string");
//     gets(a);
//     while(a[i]!=NULL)
//     {
//         if(a[i]=='   '&&a[i+1]!='   ')
//         w=w+1;
//         i=i+1;
//     }
//     printf("Total words = %d",w+1);
// }
// #include<stdio.h>
// int main()
// {
//     char a[20],b[20];
//     printf("enter a string");
//     gets(a);
//     strcpy(b,a);
//     strrev(b);
//     if(strcmp(a,b)==0)
//     printf("Palindrome");
//     else
//     printf("Not palindrome");
// }
// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0,c,f=0;
//     printf("enter a string");
//     gets(a);
//     while(a[i]!=NULL);
//     i=i+1;
//     c=i-1;
//     i=0;
//     while(a[i]!=NULL)
//     {
//     if(a[i]!=a[c])
//     {
//     f=1;
//     break;
//     }
//     i++;
//     c--;
//     }
//     if(f==0)
//     printf("Palindrome");
//     else
//     printf("Not palindrome");
// }

// #include<stdio.h>
// int main()
// {
//     char a[20];
//     int i=0,j,r;
//     printf("enter a string");
//     gets(a);
//     while(a[1]!=NULL)
//     i++;
//     r=r-1;
//     for(i=0;i<r;i++)
//     for(j=0;j<r-1;j++)
//     if(a[j]>a[j++])
//     {
//     char t;
//     t=a[j];
//     a[j]=a[j+1];
//     a[j+1]=t;
//     }
//     printf("The sorted string is = %s",a);
// }

// #include<stdio.h>
// int main()
// {
//     char a[5][10];
//     int i=0,j;
//     for(i=0;i<5;i++)
//     {
//     printf("enter a string");
//     gets(a[i]);
//     }
//     for(i=0;i<5;i++)
//     for(j=0;j<5-i-1;j++)
//     if(strcmp(a[j],a[j+1])>0)
//     {  
//     char b[10];
//     strcpy(t,b[j]);
//     strcpy(a[j],b[j+1]);
//     strcpy(a[j+1,t]);
//     }
//     printf("The sorted string is\n");
//     for(i=0;i<5;i++)
//     printf("\n%s",a[i]);
// }
