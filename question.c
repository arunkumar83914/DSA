#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct Queue
{
    int items[MAX];
    int front, rear;
} Queue;
void initializeQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int isEmpty(Queue *q)
{
    return q->front == -1;
}
int isFull(Queue *q)
{
    return q->rear == MAX - 1;
}
void enqueue(Queue *q, int element)
{
    if (isFull(q))
    {
        printf("Queue is full! Cannot add more elements\n");
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = element;
    printf("%d added to the queue\n", element);
    displayQueue(q);
}
int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty! Cannot remove elements\n");
        return -1;
    }
    int element = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1; 
    }
    else
    {
        q->front++;
    }
    return element;
}
void peek(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Front element %d\n", q->items[q->front]);
    }
}

void displayQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue contents: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

void menu()
{
    Queue q;
    initializeQueue(&q);
    int choice, element;
    while (1)
    {
        printf("\nQueue Operations Menu\n");
        printf("1. Enqueue (Add item)\n");
        printf("2. Dequeue (Remove item)\n");
        printf("3. Peek (View front item)\n");
        printf("4. Display (View all items)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5)");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter an integer to add to the queue");
                scanf("%d", &element);
                enqueue(&q, element);
                break;
            case 2:
                element = dequeue(&q);
                if (element != -1) {
                    printf("Dequeued item: %d\n", element);
                }
                break;
            case 3:
                peek(&q);
                break;
            case 4:
                displayQueue(&q);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }
}
int main()
{
    menu();
    return 0;
}


