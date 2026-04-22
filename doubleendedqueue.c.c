#include <stdio.h>
#define size 6

int queue[size];
int front = -1, rear = -1;
void enqueue_front(int val) {
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("Overflow from front end\n");
    }
    else if (front == -1) {
        front = rear = 0;
        queue[front] = val;
    }
    else if (front == 0) {
        front = size - 1;
        queue[front] = val;
    }
    else {
        front--;
        queue[front] = val;
    }
}
void dequeue_rear() {
    if (front == -1) {
        printf("Queue is empty (Underflow).\n");
        return;
    }

    printf("Deleted element from rear: %d\n", queue[rear]);

    if (front == rear) {
       
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = size - 1; 
    }
    else {
        rear--;
    }
}
void enqueue(int val) {
    if (rear == size - 1) {
        printf("Queue is Overflow\n");
    } else if (front == -1) {
        front = 0;
        rear = 0;
        queue[rear] = val;
    } else {
        rear++;
        queue[rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Underflow\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
        if (front > rear) {  
            front = rear = -1;
        }
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

int main() {
    int val, ch;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Dequeue_rear\n5. Enqueue_front\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue_front(val);
                break;
            case 5:
                dequeue_rear();
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
