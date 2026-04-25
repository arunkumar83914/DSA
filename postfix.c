#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stck {
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
struct stck* createStack(unsigned capacity)
{
struct stck* stack = (struct stck*)malloc(sizeof(struct stck));
if(!stack)return NULL;

stack->top = -1;stack->capacity = capacity;
stack->array=(int*)malloc(stack->capacity * sizeof(int));

if(!stack->array)return NULL;

return stack;
}

int isEmpty(struct stck* stack) {return stack->top == -1;}

int pop(struct stck* stack){
    if(!isEmpty(stack))
    return stack->array[stack->top--];
    return'$';
}

void push(struct stck* stack,int op) { stack->array[++stack->top]=op;}

// Function that returns value of a given postfix expression
int evaluatePostfix(char* exp)
{

    //Create a stack of capacity equal to expression size
    struct stck* stack = createStack(strlen(exp));
    int i;

    //See if stack was create successfully
    if(!stack) return -1;

    //Scan all character one by one
    for (i=0;exp[i];++i) {

    //If the scanned character is an operand,push it to the stack
    if(isdigit(exp[i])) push (stack, exp[i] - '0');

    //If the scanned char is an operator,pop from stack apply the operator
    else {
        int val1 = pop(stack);
        int val2 = pop(stack);printf("\nTop two values are %d %d",val1,val2);
        switch (exp[i]) {
            case'/':push(stack, val2 / val1);break;
            case'*':push(stack, val2 * val1);break;
            case'+':push(stack, val2 + val1);break;
            case'-':push(stack, val2 - val1);break;
        }
    }
}
return pop(stack);
}

int main()
{
    char exp[] = "98+7*654+*3*+2+";
    printf("\npostfix evaluation: %d",evaluatePostfix(exp));
    return 0;
}


