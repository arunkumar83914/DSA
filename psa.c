//1. Design a structure name car to store details like carid,model and rental rate per day.Write a c program to input data for three cars,calculate
// total rental cost for a specified no of days and display the resul.t 

// #include <stdio.h>
// #include <stdlib.h>
// struct car 
// {
//     int carid;
//     char model[50];
//     float rental_rate_per_day;
// };
// int main()
// {
//     struct car cars[3];
//     int days;
//     float total_rental_cost = 0.0;
//     for(int i=0;i<3;i++)
//     {
//         printf("Enter details for car %d\n",i+1);
//         printf("Car ID");
//         scanf("%d",&cars[i].carid);
//         printf("Model");
//         scanf("%s",cars[i].model);
//         printf("Rental rate per day");
//         scanf("%f",&cars[i].rental_rate_per_day);
//     }
//     printf("Enter the number of rental days");
//     scanf("%d",&days);
//     for(int i=0;i<3;i++)
//     {
//         total_rental_cost += cars[i].rental_rate_per_day * days;
//     }
//     printf("Total rental cost for %d days %.2f\n", days, total_rental_cost);
//     return 0;
// }

//2. Defind a structure named date with members day, month and year.Write a C program to input two dates and find the difference of days between them.

// #include <stdio.h>
// #include <stdlib.h>
// struct date
// {
//     int day;
//     int month;
//     int year;
// };
// int is LeapYear(int year)
// {
//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             return 1;
//             else
//             return 0;
//         }
//             else
//             return 1;
//     }
//             else
//             return 0;
// }
// int daysInMonth(int month, int year)
// {
//     switch (month)
//     {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             return 31;
//         case 4: case 6: case 9: case 11:
//             return 30;
//         case 2:
//             return isLeapYear(year) ? 29 : 28;
//         default:
//             return 0;
//     }
// }
// int totalDays(struct date d)
// {
//     int total_days = d.day;
//     for (int i=1;i<d.year;i++)
//     {
//         total_days += isLeapYear(i) ? 366 : 365;
//     }
//     for (int i=1;i<d.month;i++)
//     {
//         total_days += daysInMonth(i,d.year);
//     }
//     return total_days;
// }
// int differenceInDays(struct date d1, struct date d2)
// {
//     return abs(totalDays(d2) - totalDays(d1));
// }
// int main()
// {
//     struct date date1, date2;
//     printf("Enter first date (dd mm yyyy)");
//     scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
//     printf("Enter second date (dd mm yyyy)");
//     scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
//     int difference = differenceInDays(date1, date2);
//     printf("The difference in days between the two dates is %d\n", difference);
//     return 0;
// }

// create a structure names book to store book details like title,author and price.
// Write a C program to input details for three books ,find the most expensive and lowest price,book and display their information.

// #include <stdio.h>
// #include <string.h>
// struct Book
// {
//     char title[100];
//     char author[100];
//     float price;
// };
// int main()
// {
//     struct Book books[3];
//     struct Book maxPriceBook, minPriceBook;
//     int i;
//      printf("Enter details for book");
//         for(i=0;i<3;i++)
//         {
//         printf("Title");
//         scanf("%[^\n]%*c",books[i].title);
//         printf("Author");
//         scanf("%[^\n]%*c",books[i].author); 
//         printf("Price");
//         scanf("%f",&books[i].price);
//     }
//     maxPriceBook = books[0];
//     minPriceBook = books[0];
//         for(i=1;i<3;i++)
//         {
//         if (books[i].price > maxPriceBook.price)
//         {
//             maxPriceBook = books[i];
//         }
//         if (books[i].price < minPriceBook.price)
//         {
//             minPriceBook = books[i];
//         }
//         }
//     printf("\nMost expensive book\n");
//     printf("Title %s\n",maxPriceBook.title);
//     printf("Author %s\n",maxPriceBook.author);
//     printf("Price %.2f\n",maxPriceBook.price);
//     printf("\nLeast expensive book\n");
//     printf("Title %s\n",minPriceBook.title);
//     printf("Author %s\n",minPriceBook.author);
//     printf("Price %.2f\n",minPriceBook.price);
//     return 0;
// }


// Write a program to find square of N numbers using calloc function.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n,i;
//     int *numbers,*squares;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     numbers = (int*)calloc(n,sizeof(int));
//     squares = (int*)calloc(n,sizeof(int));
//     if (numbers == NULL || squares == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter the numbers\n");
//     for (i=0;i<n;i++)
//     {
//         scanf("%d",&numbers[i]);
//     }
//     for (i=0;i<n;i++)
// {
//         squares[i] = numbers[i]*numbers[i];
//     }
//     printf("The squares of the numbers are\n");
//     for (i=0;i<n;i++)
//     {
//         printf("%d",squares[i]);
//     }
//     printf("\n");
//     free(numbers);
//     free(squares);
//     return 0;
// }


// Write a C programn to short number in ascending order by using malloc fuction.

// #include <stdio.h>
// #include <stdlib.h>
// void sortArray(int *arr,int n)
// {
//     int i,j,temp;
//     for (int i=0;i<n-1;i++)
//     {
//         for (int j=0;j<n-i-1;j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main() 
// {
//     int n;
//     printf("Enter the number of elements");
//     scanf("%d", &n);
//     int *arr = (int*) malloc(n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter the elements\n");
//     for (int i=0;i<n;i++)
// {
//         scanf("%d", &arr[i]);
//     }
//     sortArray(arr, n);
//     printf("Sorted array in ascending order\n");
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }


// Write a C program to allocate memory for n numbers and print the number, and after that use realloc function to realloc memory for new n number and print the number

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     printf("Enter %d numbers\n",n);
//     for (i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The entered numbers are\n");
//     for (i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("Enter the new number of elements");
//     scanf("%d",&n);
//     arr = (int *)realloc(arr, n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory reallocation failed\n");
//         return 1;
//     }
//         printf("Enter the new numbers:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("The updated numbers are\n");
//     for (i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }


// Write a C program to perform subtraction of two matrix.

// #include <stdio.h>
// #define MAX 10 
// void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row, int col)
// {
//     for (int i=0;i<row;i++)
//     {
//         for (int j=0;j<col;j++)
//         {
//             result[i][j] = matrix1[i][j] - matrix2[i][j];
//         }
//     }
// }
// int main()
// {
//     int matrix1[MAX][MAX],matrix2[MAX][MAX],result[MAX][MAX];
//     int row, col;
//     printf("Enter number of rows");
//     scanf("%d",&row);
//     printf("Enter number of columns");
//     scanf("%d",&col);
//     printf("Enter elements of first matrix\n");
//     for (int i=0;i<row;i++)
//     {
//         for (int j=0;j<col;j++)
//         {
//             printf("Matrix1[%d][%d]",i+1,j+1);
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix\n");
//     for (int i=0;i<row;i++)
// {
//         for (int j=0;j<col;j++)
//         {
//             printf("Matrix2[%d][%d]",i+1,j+1);
//             scanf("%d",&matrix2[i][j]);
//         }
//     }
//     subtractMatrices(matrix1, matrix2, result, row, col);
//     printf("Result of matrix subtraction (Matrix1 - Matrix2) is\n");
//     for (int i=0;i<row;i++)
//     {
//         for (int j=0;j<col;j++)
//         {
//             printf("%d",result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Write a C program to perform transpose of a matrix.

// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     printf("Enter a no");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("The transpose of matrix is \n");
//     for(i=0;i<3;i++)
//     {
//         printf("\n");
//         for(j=0;j<3;j++)
//         printf("%d\t",a[j][i]);
//     }
// }


//    Write a C program to find the sum of left diagonal sum.

// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j,s=0;
//     printf("Enter a no");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     if (i+j==2)
//     s=s+a[i][j];
//     printf("The sum of diagonal elements = %d",s);
// }










