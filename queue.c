#include <stdio.h>

#define MAX 20

int queue[MAX], front = -1, rear = -1;

void insert(int item) {
    if (rear == MAX - 1) {
        printf("Queue is FULL / queue overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = item;
    }
}

int delete() {
    if (front == -1 || front > rear) {
        printf("Queue is EMPTY\n");
        return -1;
    } else {
        return queue[front++];
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is EMPTY\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

int main() {
    int choice, item;
    char cont;
    printf("\nQueue Implementation\n--------------------");
    do {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. IsEmpty\n5. IsFull\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                item = delete();
                if (item != -1) printf("Deleted element: %d\n", item);
                break;
            case 3:
                display();
                break;
            case 4:
                printf(isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT EMPTY\n");
                break;
            case 5:
                printf(isFull() ? "Queue is FULL\n" : "Queue is NOT FULL\n");
                break;
            default:
                printf("INVALID choice\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');
    return 0;
}