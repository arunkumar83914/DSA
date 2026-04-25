#include <stdio.h>
#include <stdlib.h>  

#define size 5

int stack[size];  
int top = -1;      

void push(int val){

    int stack[size];
    if(top==size-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=val;
    }
}

void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("%d",stack[top]);
        top--;
    }
}

void display(){
    int x=top;
    if(x==-1){
        printf("empty");
    }
    else{
        while(x>=0){
            printf(stack[x]);
            x--;
        }
    }
}
int main(){
while(1){
    int val,ch;
    printf("\n1.Push the stack\n2.Pop of the stack\n3.Display the list\n.\n4.Exit\n Enter a choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter a val");
        scanf("%d",&val);
        push(val);
        break;
        case 2:
        pop();
        break;
        case 3:
       display();
        case 4:
        exit(1);
        break;
        default :
        printf("wrong choise !");
    }
}
}


        
