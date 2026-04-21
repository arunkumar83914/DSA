// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// } *head = NULL;

// void insert_at_begin(struct node**, int);
// void insert_at_end(struct node**, int);
// void delete_begin(struct node**);
// void delete_last(struct node**);
// void delete_specific(struct node**, int);
// void insert_after(struct node**, int, int);
// void display(struct node*);

// int main() {
//     int ch, val, key;

//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert at Beginning\n");
//         printf("2. Insert at End\n");
//         printf("3. Insert after a specific element\n");
//         printf("4. Delete from Beginning\n");
//         printf("5. Delete from End\n");
//         printf("6. Delete specific element\n");
//         printf("7. Display\n");
//         printf("8. Exit\n");
//         printf("Enter Your Choice: ");
//         scanf("%d", &ch);

//         switch (ch) {
//             case 1:
//                 printf("Enter value to insert at beginning: ");
//                 scanf("%d", &val);
//                 insert_at_begin(&head, val);
//                 break;
//             case 2:
//                 printf("Enter value to insert at end: ");
//                 scanf("%d", &val);
//                 insert_at_end(&head, val);
//                 break;
//             case 3:
//                 printf("Enter the value after which to insert: ");
//                 scanf("%d", &key);
//                 printf("Enter the new value to insert: ");
//                 scanf("%d", &val);
//                 insert_after(&head, key, val);
//                 break;
//             case 4:
//                 delete_begin(&head);
//                 break;
//             case 5:
//                 delete_last(&head);
//                 break;
//             case 6:
//                 printf("Enter the value to delete: ");
//                 scanf("%d", &val);
//                 delete_specific(&head, val);
//                 break;
//             case 7:
//                 display(head);
//                 break;
//             case 8:
//                 exit(0);
//             default:
//                 printf("Invalid Choice\n");
//         }
//     }

//     return 0;
// }

// // Insert at the beginning
// void insert_at_begin(struct node** head_ref, int new_data) {
//     struct node* new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = new_data;
//     new_node->next = *head_ref;
//     *head_ref = new_node;
// }

// // Insert at the end
// void insert_at_end(struct node** head_ref, int new_data) {
//     struct node* new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = new_data;
//     new_node->next = NULL;

//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//         return;
//     }

//     struct node* temp = *head_ref;
//     while (temp->next != NULL)
//         temp = temp->next;

//     temp->next = new_node;
// }

// // Insert after a specific element
// void insert_after(struct node** head_ref, int key, int new_data) {
//     struct node* temp = *head_ref;

//     while (temp != NULL && temp->data != key)
//         temp = temp->next;

//     if (temp == NULL) {
//         printf("Element %d not found.\n", key);
//         return;
//     }

//     struct node* new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = new_data;
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// // Delete from the beginning
// void delete_begin(struct node** head_ref) {
//     if (*head_ref == NULL) {
//         printf("List is empty.\n");
//         return;
//     }

//     struct node* temp = *head_ref;
//     *head_ref = (*head_ref)->next;
//     printf("Deleted item is %d\n", temp->data);
//     free(temp);
// }

// // Delete from the end
// void delete_last(struct node** head_ref) {
//     if (*head_ref == NULL) {
//         printf("List is empty.\n");
//         return;
//     }

//     if ((*head_ref)->next == NULL) {
//         printf("Deleted item is %d\n", (*head_ref)->data);
//         free(*head_ref);
//         *head_ref = NULL;
//         return;
//     }

//     struct node* temp = *head_ref;
//     while (temp->next->next != NULL)
//         temp = temp->next;

//     printf("Deleted item is %d\n", temp->next->data);
//     free(temp->next);
//     temp->next = NULL;
// }

// // Delete a specific element
// void delete_specific(struct node** head_ref, int key) {
//     struct node* temp = *head_ref;
//     struct node* prev = NULL;

//     while (temp != NULL && temp->data != key) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Element %d not found.\n", key);
//         return;
//     }

//     if (prev == NULL) {
//         *head_ref = temp->next;
//     } else {
//         prev->next = temp->next;
//     }

//     printf("Deleted item is %d\n", temp->data);
//     free(temp);
// }

// // Display the linked list
// void display(struct node* head) {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     while (head != NULL) {
//         printf("%d -> ", head->data);
//         head = head->next;
//     }
//     printf("NULL\n");
// }








#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void insert_at_begin(struct node **, int);
void display(struct node *);
void insert_at_end(struct node **, int);
void delete_begin(struct node **);
void delete_end(struct node **);
void delete_at_position(struct node **, int);
void insert_at_position(struct node **, int, int);
int main()
{
    int ch, val, pos;

    struct node *head = NULL;
    while (1)
    {
        printf("\nenter the choice from \n 1.insert at begin \n 2. dispaly \n3.insert at end\n 4.delete from  begin\n 5.delete at end.\n 6. delete at position\n 7.exit\n 8.insert at specific");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the data: ");
            scanf("%d", &val);
            insert_at_begin(&head, val);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("enter the data : ");
            scanf("%d", &val);
            insert_at_end(&head, val);
            break;
        case 4:
            delete_begin(&head);
            break;
        case 5:
            delete_end(&head);
            break;
        case 6:
            printf("enter the position: ");
            scanf("%d", &pos);
            delete_at_position(&head, pos);
            break;
        case 7:
            exit(0);
            break;
        case 8:
            printf("enter the data: ");
            scanf("%d", &val);
            printf("enter the position: ");
            scanf("%d", &pos);
            insert_at_position(&head, val, pos);
            break;
        }
    }
}

void insert_at_begin(struct node **head_ref, int new_data) // insert element at the start of the linked list
{

    // creating new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = new_data;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    newNode->next = *head_ref;
    (*head_ref)->prev = newNode;
    *head_ref = newNode;
}

void display(struct node *head) // display the linked list
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}
void delete_begin(struct node **head_ref) // delete element at the begin of the list
{
    if (*head_ref == NULL)
    {
        printf("The list is already empty.\n");
        return;
    }
    struct node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    if (*head_ref != NULL)
    {
        (*head_ref)->prev = NULL;
    }
    free(temp);
}
void delete_end(struct node **head_ref) // delete element from the end
{
    if (*head_ref == NULL)
    {
        printf("The list is already empty.\n");
        return;
    }

    struct node *temp = *head_ref;
    if (temp->next == NULL)
    {
        *head_ref = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}
void insert_at_position(struct node **head_ref, int data, int position) // insert element at specific position
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    if (position < 1)
    {
        printf("Position should be >= 1.\n");
        return;
    }

    // if we are inserting at head
    if (position == 1)
    {
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }

    struct node *temp = *head_ref;
    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf(
            "Position greater than the number of nodes.\n");
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void delete_at_position(struct node **head_ref, int position) // delete element from specific
{

    if (*head_ref == NULL)
    {
        printf("The list is already empty.\n");
        return;
    }
    struct node *temp = *head_ref;
    if (position == 1)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position is greater than the number of "
               "nodes.\n");
        return;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    free(temp);
}
void insert_at_end(struct node **head_ref, int data) // insert element at end
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    // check if DLL is empty
    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    struct node *temp = *head_ref;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
} 





