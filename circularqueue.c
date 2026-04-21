#include <stdio.h>
#define size 5

int cq[size];
int f = -1, r = -1;
void enqueue(int val){
    if(f==(r+1)%size){
        printf("Queue is overflow.");
    }else if(f==-1){
        f=0,r=0,cq[r]=val;
    }else{
        r=(r+1)%size;
        cq[r]=val;
    }
}
void dequeue(){
    if(r==-1 && f==-1){
        printf("Queue is empty.");
    }
    else if(f==r){
        printf("Dequeued element: %d\n", cq[f]);
        f = r = -1;
    }
    else{
        printf("Dequeued element: %d\n", cq[f]);
        f = (f + 1) % size;
    }
}
void display() {
    if (f == -1) {
        printf("Queue is empty.\n");
    } else {
        int i = f;
        printf("Queue elements: ");
        while (1) {
            printf("%d ", cq[i]);
            if (i == r) break;
            i = (i + 1) % size;
        }
        printf("\n");
    }
}int main() {
    int val, ch;
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        printf("Enter a choise.");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue(val);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 4);
    return 0;
}

