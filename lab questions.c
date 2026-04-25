// 1. Write a C Program to find area and circumference of circle. 

// #include <stdio.h> 
// int main()
// { 
//      float c,a; 
//      int r; 
//      printf("Ente a radius"); 
//      scanf("%d",&r); 
//      a=3.14*r*r; 
//      c=2*3.14*r; 
//      printf("Area of circal is = %.2f",a); 
//      printf("\nCurcumfrence of area is = %.2f",c); 
// } 


// 2. Write a C Program to convert temperature from degree centigrade to Fahrenheit.
//  °F = °C × (9/5) + 32 

// #include <stdio.h> 
// int main()
// { 
// int c; 
// float f; 
// printf("Enter a centigrade"); 
// scanf("%d",&c); 
// f = c * 9/5 + 32; 
// printf("degree centigrade to Fahrenheit = %.2f",f); 
// } 


// 3. Write a C Program to show swap of two numbers without using third variable. 

// #include <stdio.h> 
// int main()
// { 
// int a,b; 
// printf("Enter two number"); 
// scanf("%d%d",&a,&b); 
// a=a+b; 
// b=a-b; 
// a=a-b; 
// printf("after swaping %d%d",a,b); 
// } 


 
// 4. Write a C Program to find greatest in 3 numbers. 
 
// #include <stdio.h> 
// int main()
// { 
//      int a,b,c; 
//      printf("enter a three number"); 
//      scanf("%d%d%d",&a,&b,&c); 
//      if(a>b&&a>c)
//      { 
//      printf("a is gretest number %d",a); 
//      } 
//      else if(b>c&&b>a)
//      { 
//      printf("b is gretest number %d",b); 
//      } 
//      else
//      { 
//      printf("c is gretest number %d",c); 
//      } 
// } 


// 5. Write a C Program to find the entered year is leap year or not. 
 
// #include <stdio.h> 
// int main()
// { 
//      int year; 
//      printf("Enter a year"); 
//      scanf("%d",&year); 
//      if((year%4==0&&year%100!=0)||year%4==0)
//      { 
//      printf("it is a leap year = %d",year); 
//      } 
//      else
//      { 
//      printf("it is not a leap year = %d",year); 
//      } 
// } 


// 6. Write a C Program to display arithmetic operator using switch case.

// #include <stdio.h> 
// int main()
// { 
//      int a,b,c; 
//      int operator; 
//      printf("enter a two number"); 
//      scanf("%d%d",&a,&b); 
//      printf("\n1.add\n2.sub\n3.mul\n4.div\n5.mod"); 
//      printf("\enter a choise"); 
//      scanf("%d",&operator); 
//      switch (operator)
//      { 
//      case 1: 
//      c=a+b; 
//       printf("addition of two number = %d",c); 
//           break; 
//      case 2: 
//      c=a-b; 
//     printf("subtraction of two number = %d",c); 
//           break;  
//      case 3: 
//      c=a*b; 
//      printf("multiplication of two number = %d",c); 
//           break; 
//      case 4: 
//      c=a/b; 
//      printf("division of two number = %d",c); 
//           break;  
//      case 5: 
//      c=a%b; 
//      printf("modulus of two number = %d",c); 
//           break;      
//      default: 
//      printf("invalid key !"); 
//           break; 
//      }     
//  printf("result two number = %d",c); 
// } 


// 7. Write a C Program to print Fibonacci series up to 100. 
 
// #include <stdio.h> 
// int main()
// { 
//      int a=0,b=1,c; 
//      printf("%d  %d",a,b); 
//      for(int i=2;i<=11;i++)
//      { 
//           c=a+b; 
//           printf(" %d",c); 
//           a=b; 
//           b=c;        
//      } 
// } 


// 08.  Program to find whether given no. is prime no. or not. 

// #include <stdio.h>
// int isPrime(int num)
// {
//     if (num <= 1)
//     {
//     return 0; 
//     }
//     for (int i=2;i*i<=num;i++)
//     {
//         if (num % i == 0)
//         {
//         return 0;
//         }
//     }
//     return 1;
// }
//     int main()
//     {
//     int number;
//     printf("Enter a number");
//     scanf("%d", &number);
//     if (isPrime(number))
//     {
//     printf("%d is a prime number.\n",number);
//     } 
//     else
//     {
//     printf("%d is not a prime number.\n",number);
//     }
//     return 0;
// }


// 9. Write a C Program to display sum of series   1 + 1/2  + 1/3 +……………..+1/n. 
 
// #include <stdio.h> 
// int main()
// { 
//      int i,n,sum=0; 
//      printf("enter a number"); 
//      scanf("%d",&n);     
//      printf(" 1 + "); 
//      for(i=2;i<=n-1;i++) 
//           printf("1/%d +",i); 
//      for(i=1;i<=n;i++) 
//           sum = sum + i; 
//           printf(" 1/%d", n); 
//           printf("\nSum = 1/%d", sum + 1/n); 
// } 


// 10. Write a C Program to print star sequence 1: 
// * 
// *    * 
// *    *    * 
// *    *    *    * 
 
// #include <stdio.h> 
// int main()
// { 
//      for(int i=1;i<=5;i++)
//      { 
//           printf("\n"); 
//           for(int j=1; j<=i; j++)
//           { 
//           printf("*  "); 
//           } 
//      } 
// } 


// 11. Write a C Program to print star sequence 2: 
//                   * 
//             *     * 
//       *     *     * 
// *     *     *     * 
 
// #include <stdio.h> 
// int main()
// { 
//     int i,j,k;
//      for(int i=1;i<=4;i++){ 
//           printf("\n"); 
//           for(int k=4;k>=i;k--)
//           { 
//                printf("  "); 
//           } 
//           for(int j=1; j<=i; j++) 
//                printf("* ");         
//      } 
// }


// 12. Write a C Program to print star sequence 3: 
//      *  
//     * * 
//   * * * * 
 
// #include <stdio.h> 
// int main()
// { 
//      int n; 
//      printf("Enter a number"); 
//      scanf("%d",&n); 
//      for(int i=0;i<=n;i++)
//      { 
//           printf("\n"); 
//           for(int k=n;k>=i;k--)
//           { 
//                if(i==0 && k==0)
//                { 
//                printf(" *"); 
//                } 
//                else
//                { 
//                printf("  "); 
//                } 
//           } 
//           for(int j=0;j<=i*2-1;j++)
//           {   
//                printf("* "); 
//           } 
//      } 
// }


// 13. Write a C Program to find square of a number using functions. 
 
// #include <stdio.h> 
// int squre(int num)
// { 
//      int squre; 
//      squre = num*num; 
//      return squre; 
// } 
// int main()
// { 
//      int a,b; 
//      printf("Enter a number"); 
//      scanf("%d",&a); 
//      b = squre(a); 
//      printf("squre of the number is %d",b); 
// }


// 14. Write a C Program to find factorial of a number using functions. 
 
// #include <stdio.h> 
// int fact(int num)
// { 
//      int fact=1; 
//      for(int i=1;i<=num;i++)
//      { 
//           fact=fact*i; 
//      } 
//           return fact;     
// } 
// int main()
// { 
//      int a,b; 
//      printf("Enter a fact number"); 
//      scanf("%d",&a); 
//      b=fact(a); 
//      printf("factorial number of %d",b); 
// }  


// 15. Write a C Program to find whether a string is palindrome or not using function.

// #include <stdio.h> 
// int palindrome(int num)
// { 
//      int sum=0; 
//      while(num!=0)
//      { 
//          num=num%10; 
//          sum = sum*10+num; 
//          num= num/10;   
//      } 
//      if(num==sum)
//      { 
//            return sum; 
//      } 
// } 
// int main()
// { 
//      int a,r; 
//      printf("Enter a number"); 
//      scanf("%d",&a); 
//      r=palindrome(a); 
//      printf("palindrome number is %d",r); 
// } 


// 16. Write a C Program to show sum of 10 elements of array & show the average. 
 
// #include <stdio.h> 
// int main()
// { 
//      int arr[10],sum=0,i,avg; 
//      printf("Enter ten array"); 
//      for(i=0;i<10;i++)
//      { 
//      scanf("%d",&arr[i]); 
//      } 
//      for(i=0;i<10;i++) 
//        sum=sum+arr[i]; 
//        printf("sum of array = %d\n",sum); 
//        avg=sum/10; 
//        printf("avg of the value is = %d",avg); 
// } 


// 17. Write a C Program to find the maximum no. in an array. 
 
// #include <stdio.h> 
// int main()
// { 
//      int arr[5],i,max,xmax; 
//      printf("Enter ten array"); 
//      for(i=0;i<5;i++)
//      { 
//      scanf("%d",&arr[i]); 
//      } 
//      max=arr[0]; 
//      for(i=0;i<5;i++)
     
//      { 
//           if(arr[i] > xmax){ 
//                max=arr[i]; 
//                printf("Maximum array is = %d",max); 
//           } 
//      } 
// }


// 18. Write a C Program to sort an array. 
 
// #include <stdio.h> 
// int main()
// { 
//      int a[10],n; 
//      printf("Enter a number"); 
//      scanf("%d",&n); 
//      printf("Enter a array"); 
//      for(int i=0; i<=n; i++)
//      { 
//           scanf("%d",&a[i]); 
//      } 
//      for(int i=0;i<=n;i++)
//      { 
//           for(int j=0;j<n-i-1;j++)
//           { 
//                if(a[j] > a[j+1])
//                { 
//                     int t; 
//                     t=a[j]; 
//                     a[j]=a[j+1]; 
//                     a[j+1]=t; 
//                }    
//           } 
//      } 
//      printf("Sorted array"); 
//               for(int i=0;i<=n;i++)
//               { 
//                printf("%d\t",a[i]); 
//               } 
// }

// 19. Program to print Number of Occurrences of Vowels,Consonants, Words, Spaces and Special Characters in the Given Statement.

// #include <stdio.h> 
// #include <ctype.h> 
// #include <string.h> 
// int main()
// { 
// char str[1000]; 
// int vowels = 0, consonants = 0, words = 0, spaces = 0, specialChars = 0; 
// printf("Enter a statement"); 
// fgets(str, sizeof(str), stdin); 
// int length = strlen(str); 
//     for (int i = 0; i < length; i++)
//     { 
//         char ch = str[i]; 
//         if (isalpha(ch))
//         {  
//             char lowerCh = tolower(ch); 
//             if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
//             {
//                 vowels++; 
//             }
//             else
//             { 
//                 consonants++; 
//             } 
//         } 
//         else if (isspace(ch))
//         {  
//             spaces++; 
//             if (i > 0 && !isspace(str[i - 1]))
//             { 
//                 words++;  
//             } 
//         } 
//         else if (ispunct(ch) || (!isalnum(ch) && !isspace(ch))) 
// { 
//             specialChars++;  
//         } 
//     } 
//  if (length > 0 && !isspace(str[length - 1]) && isalnum(str[length - 1])) 
// { 
//         words++; 
//     } 
//     printf("Vowels: %d\n", vowels); 
//     printf("Consonants: %d\n", consonants); 
//     printf("Words: %d\n", words); 
//     printf("Spaces: %d\n", spaces); 
//     printf("Special Characters: %d\n", specialChars); 
//     return 0; 
// } 


// 20. Program to find multiplication of two matrices.

// #include <stdio.h> 
// int main()
// { 
//      int a[3][3],b[3][3],c[3][3]; 
//      printf("enter the array"); 
//      for(int i=0;i<3;i++)
//      { 
//           for(int j=0;j<3;i++)
//           { 
//                scanf("%d",&a[i][j]); 
//           } 
//      } 
//      printf("enter the array"); 
//      for(int i=0;i<3;i++)
//      { 
//           for(int j=0;j<3;i++)
//           { 
//                scanf("%d",&b[i][j]); 
//           } 
//      } 
//      for(int i=0;i<3;i++)
//      { 
//           for(int j=0;j<3;i++)
//           { 
//                c[i][j]=0; 
//                for(int k=0;k<3;k++)
//                { 
//                     c[i][j]=c[i][j]+a[i][k]*b[j][k]; 
//                } 
//           } 
//      } 
//      printf("The multipliction of matrix"); 
//      for(int i=0;i<3;i++)
//      { 
//           printf("\n"); 
//           for(int j=0;j<3;i++)
//           { 
//                printf("%d",c[i][j]); 
//           } 
//      } 
// } 


// 21.  Program to implement the 1D and 2D array using dynamic memory allocation.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// { 
//     int *arr1D,**arr2D;
//     int n,m,i,j;
//     printf("Enter the size of 1D array");
//     scanf("%d",&n);
//     arr1D = (int *)malloc(n * sizeof(int));
//     printf("Enter %d elements for 1D array", n);
//     for (i=0;i<n;i++) {
//         scanf("%d", &arr1D[i]);
//     }
//     printf("1D Array elements \n");
//     for (i=0;i<n;i++)
//     {
//         printf("%d",arr1D[i]);
//     }
//     printf("\n");
//     printf("Enter number of rows and columns for 2D array");
//     scanf("%d%d",&n,&m);
//     arr2D = (int **)malloc(n * sizeof(int *));
//     for (i=0;i<n;i++)
//     {
//         arr2D[i] = (int *)malloc(m * sizeof(int));
//     }
//     printf("Enter elements for 2D array \n");
//     for (i=0;i<n;i++)
//     {
//         for (j=0;j<m;j++)
//         {
//             scanf("%d",&arr2D[i][j]);
//         }
//     }
//     printf("2D Array elements \n");
//     for (i=0;i<n;i++)
//     {
//         for (j=0;j<m;j++)
//         {
//             printf("%d",arr2D[i][j]);
//         }
//         printf("\n");
//     }
//     free(arr1D);
//     for (i=0;i<n;i++)
//     {
//         free(arr2D[i]);
//     }
//     free(arr2D);
//     return 0;
// }


// 22. Program to store the records of n students and display the Names of students in merit list of top 10. 
// Each record consists: {Roll No, Name, Branch, Year, Marks}. 

// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     int rollNo;
//     char name[50];
//     char branch[50];
//     int year;
//     float marks;
// };
// void sortStudents(struct Student students[],int n)
// {
//     struct Student temp;
//     for (int i=0;i<n-1;i++)
//     {
//         for (int j=i+1;j<n;j++)
//         {
//             if (students[i].marks<students[j].marks)
//             {
//                 temp = students[i];
//                 students[i] = students[j];
//                 students[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter number of students");
//     scanf("%d",&n);
//     struct Student students[n];

//     for (int i=0;i<n;i++)
//     {
//         printf("Enter details for student %d\n",i+1);
//         printf("Roll No");
//         scanf("%d",&students[i].rollNo);
//         printf("Name");
//         getchar();
//         fgets(students[i].name,50,stdin);
//         students[i].name[strcspn(students[i].name,"\n")] = 0; 
//         printf("Branch");
//         scanf("%s",students[i].branch);
//         printf("Year");
//         scanf("%d",&students[i].year);
//         printf("Marks");
//         scanf("%f",&students[i].marks);
//     }
//     sortStudents(students,n);
//     printf("\nTop 10 Students in Merit List \n");
//     for (int i=0;i<(n<10?n:10);i++)
//     {
//         printf("%d.%s\n",i+1,students[i].name);
//     }
//     return 0;
// }


// 23.  Program in C to copy the text of one file to another. 

// #include <stdio.h>
// int main()
// {
//     FILE *source,*destination;
//     char ch;
//     source = fopen("source.txt","r");
//     if (source == NULL)
//     {
//         printf("Source file not found.\n");
//         return 1;
//     }
//     destination = fopen("destination.txt","w");
//     if (destination == NULL)
//     {
//         printf("Error in opening destination file.\n");
//         fclose(source);
//         return 1;
//     }
//     while ((ch = fgetc(source)) != EOF)
//     {
//         fputc(ch,destination);
//     }
//     printf("File copied successfully.\n");
//     fclose(source);
//     fclose(destination);
//     return 0;
// }


// 24.  Program to store the records of students {Roll no, name, branch, marks} in a file “record.doc”. 

// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     int rollNo;
//     char name[50];
//     char branch[50];
//     float marks;
// };
// int main()
// {
//     FILE *file;
//     struct Student student;
//     file = fopen("record.doc","w");
//     if (file == NULL)
//     {
//         printf("Error in opening file.\n");
//         return 1;
//     }
//     int n;
//     printf("Enter number of student");
//     scanf("%d",&n);
//     for (int i=0;i<n;i++)
//     {
//         printf("Enter details for student %d\n",i+1);
//         printf("Roll No");
//         scanf("%d",&student.rollNo);
//         printf("Name");
//         getchar(); 
//         fgets(student.name,50,stdin);
//         student.name[strcspn(student.name,"\n")] = 0;
//         printf("Branch");
//         scanf("%s",student.branch);
//         printf("Marks");
//         scanf("%f",&student.marks);
//         fprintf(file,"%d%s%s%.2f\n",student.rollNo,student.name,student.branch,student.marks);
//     }
//     fclose(file);
//     printf("Records stored in record.doc.\n");
//     return 0;
// }


// 25.  Program to print National Flag using graphics functions.   

// #include <conio.h>
// #include <math.h>
// void drawAshokaChakra(int x,int y,int radius){
//     setcolor(BLUE);
//     circle(x,y,radius);
//     floodfill(x,y,BLUE);
//         for (int i=0;i<24;i++)
//         {
//         float angle = i * (360.0 / 24);
//         int endX = x + (int)(radius * cos(angle * M_PI / 180));
//         int endY = y + (int)(radius * sin(angle * M_PI / 180));
//         line(x, y, endX, endY);
//     }
//     setfillstyle(SOLID_FILL,BLUE);
//     floodfill(x,y,BLUE);
// }
// int main()
// {
//     int gd = DETECT, gm;
//     initgraph(&gd,&gm,"");
//     int width = getmaxx();
//     int height = getmaxy();
//     setfillstyle(SOLID_FILL, COLOR(255, 153, 51)); 
//     floodfill(width / 2, height / 6, WHITE);
//     setfillstyle(SOLID_FILL, WHITE);
//     floodfill(width / 2, height / 2, WHITE);
//     drawAshokaChakra(width / 2, height / 2, 40);
//     setfillstyle(SOLID_FILL, GREEN);
//     floodfill(width / 2, 5 * height / 6, WHITE);
//     setcolor(WHITE);
//     outtextxy(width / 4, height - 50, "Indian National Flag");
//     getch();
//     closegraph();
//     return 0;
// }



















