#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void towerOfHanoi(int n, char S, char D, char aux) {
    if (n == 1) {
        printf("Move disk 1 Source %c Destination %c\n", S, D);
        return;
    }

    towerOfHanoi(n - 1, S, aux, D);
    printf("Move disk %d Source %c Destination %c\n", n, S, D);
    towerOfHanoi(n - 1, aux, D, S);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves:\n");
    towerOfHanoi(n, 'A', 'D', 'S');
    return 0;
}