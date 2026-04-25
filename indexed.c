#include <stdio.h>
#include <stdlib.h>

// Function to perform indexed sequential search
void indexedSequentialSearch(int arr[], int n, int k, int gn) {
    int elements[gn], indices[gn];
    int i, j = 0, ind = 0, set = 0;
    int start = 0, end = 0;

    // Step 1: Build index table
    for (i = 0; i < n; i += 3) {
        if (ind < gn) {
            elements[ind] = arr[i];
            indices[ind] = i;
            ind++;
        }
    }

    // Step 2: Check if key is less than first index element
    if (k < elements[0]) {
        printf("Not Found\n");
        return;
    }

    // Step 3: Find the range where the key might be
    for (i = 1; i < ind; i++) {
        if (k <= elements[i]) {
            start = indices[i - 1];
            end = indices[i];
            set = 1;
            break;
        }
    }

    // Step 4: If not found, search in last block
    if (set == 0) {
        start = indices[ind - 1];
        end = n - 1;
    }

    // Step 5: Linear search within the identified block
    for (i = start; i <= end; i++) {
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            return;
        }
    }

    printf("Not Found\n");
}

int main() {
    int arr[] = {3, 8, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; // key to search
    int gn = 3; // number of index elements

    printf("Enter the element to search: ");
    scanf("%d", &k);

    indexedSequentialSearch(arr, n, k, gn);
    return 0;
}

  

