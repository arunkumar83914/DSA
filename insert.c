#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void insert_at_begin(struct node**,int);
void display(struct node*);

int main(){
    int ch,val;
    while(1){
        printf("1.Insert At Begin\n 2.Display\n 3.Exit\nEnter YOur choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("\nEnter the data");scanf("%d,&val");insert_at_begin(&head,val);break;
            case 2:display(head);break;
            case 3:exit(1);
            default:printf("\nYou have Entered Wrong Choice");
        }
    }
    return 0;
}

void insert_at_begin(struct node**head_ref,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void display(struct node* r){
    while(r!=NULL){
        printf("%d->",r->data);
        r=r->next;
    }
    printf("NULL\n");
}