#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert_at_begin(struct node **, int);
void display(struct node *);
void insert_at_end(struct node **, int);
void delete_begin(struct node **);
void delete_end(struct node **);
void delete_at_position(struct node **, int);
int main()
{
    int ch, val, pos;

    struct node *head = NULL;
    while (1)
    {
        printf("\n 1.insert at begin \n 2. dispaly \n3.insert at end\n 4.delete from  begin\n 5.delete at end.\n 6. delete at position\n 7.exit\nenter the choice from ");
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
        }
    }
}

void insert_at_begin(struct node **head_ref, int new_data) // insert element at the start of the linked list
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void display(struct node *r) // display the linked list
{
    while (r != NULL)
    {
        printf("%d -> ", r->data);
        r = r->next;
    }
    printf("NULL");
}
void delete_begin(struct node **head_ref) // delete element at the begin of the list
{
    if (*head_ref == NULL)
    {
        return;
    }
    struct node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    printf("the deleted item is %d", temp->data);
    free(temp);
}
void delete_end(struct node **head_ref) // delete element from the end
{
    if (*head_ref == NULL)
    {
        printf("the list is empty");
    }
    struct node *temp = *head_ref;
    if (temp->next == NULL)
    {
        printf("deleted item is %d", temp->data);
        free(temp);
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    printf("deleted data item is %d", (temp->next)->data);
    free(temp->next);
    temp->next = NULL;
}
void insert_at_position(struct node **head_ref, int data, int position) // insert element at specific position
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (position <= 0)
    {
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }
    struct node *temp = *head_ref;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("invalied range position!");
        temp = *head_ref;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void delete_at_position(struct node **head_ref, int position) // delete element from specific
{
    if (*head_ref == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = *head_ref;
    if (position <= 0)
    {
        *head_ref = temp->next;
        printf("the deleted item is %d", temp->data);
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position out of range\n");
        return;
    }
    struct node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void insert_at_end(struct node **head_ref, int data) // insert element at end
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
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
}

