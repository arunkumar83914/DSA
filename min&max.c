// #include<stdio.h>
// void max_min_element(int arr[],int n)
// {
//     int min, max;
//     for (int i=0;i<n-1;i=i+2)
//     {
//         if (arr[i]<arr[i+1])
//         {
//             min=arr[i];
//             max=arr[i+1];
//         }
//         else
//         {
//             min=arr[i+1];
//             max=arr[i];
//         }
//         printf("The value of maximum element is %d",max);
//         printf("The value of minimum element in the array is %d");
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the size of the array");
//     int a[n];
//     printf("Enter the element of the array");
//     for (int i=0;i<n;i++)
//     {
//     scanf("%d", &a[i]);
//     }
//     max_min_element(a,n);
// }






// #include <stdio.h>
// void max_min_element(int arr[], int n)
// {
//     int min = 0, max = 0;
//     for (int i = 0; i < n; i = i + 2)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             if (arr[i] < arr[i + 1])
//             {
//                 if (arr[i] < min)
//                 {
//                     min = arr[i];
//                 }
//                 if (arr[i + 1] > max)
//                 {
//                     max = arr[i + 1];
//                 }
//             }
//         }
//         else
//         {
//             if (arr[i + 1] < min)
//             {
//                 min = arr[i + 1];
//             }
//             if (arr[i] > max)
//             {
//                 max = arr[i];
//             }
//         }
//     }
//     printf("the value of maximum element is: %d\n", max);
//     printf("the value of minimum element in the array is: %d", min);
// }
// int main()
// {
//     int n;
//     printf("enter the size of the array: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("enter the element of array: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     max_min_element(a,n);
// }






























