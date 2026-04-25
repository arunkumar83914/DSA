#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Function to return precedence of operators
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c == '*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else 
        return -1;
}

// Function to return associativity of operators
char associativity(char c) {
    if(c == '^')
        return 'R'; // Right-associative
    return 'L';    // Default to left-associative
}

// Function to convert infix expression to postfix
void infixtopostfix(char s[]) {
    char result[100];
    int ri = 0;
    int len = strlen(s);
    char stack[100];
    int si = -1;

    for(int i = 0; i < len; i++) {
        char c = s[i];

        // If the scanned character is an operand, add it to output
        if((c >= 'a' && c <= 'z') || 
           (c >= 'A' && c <= 'Z') || 
           (c >= '0' && c <= '9')) {
            result[ri++] = c;
        }
        // If '(' is encountered, push to stack
        else if (c == '(') {
            stack[++si] = c;
        }
        // If ')' is encountered, pop until '('
        else if (c == ')') {
            while(si >= 0 && stack[si] != '(') {
                result[ri++] = stack[si--];
            }
            si--; // pop '('
        }
        // If an operator is encountered
        else {
            while(si >= 0 && ((prec(c) < prec(stack[si])) || 
                 (prec(c) == prec(stack[si]) && associativity(c) == 'L'))) {
                result[ri++] = stack[si--];
            }
            stack[++si] = c;
        }
    }

    // Pop remaining operators from stack
    while (si >= 0) {
        result[ri++] = stack[si--];
    }

    result[ri] = '\0'; // null-terminate result
    printf("%s\n", result);
}

int main() {
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixtopostfix(exp);
    return 0;
}