#include <stdio.h>
#include <ctype.h>  // For isalnum() function
#include <string.h> // For strlen()

#define MAX 100 // Maximum stack size

char stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = ch;
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
        return '\0'; // Return NULL if stack is empty
    }
    return stack[top--];
}

// Function to return precedence of operators
int precedence(char ch) {
    if (ch == '*' || ch == '/') return 2;
    if (ch == '+' || ch == '-') return 1;
    return 0; // Lower precedence for others
}

// Function to convert infix expression to postfix
void infixToPostfix(char infix[]) {
    char postfix[MAX];
    int j = 0;

    for (int i = 0; i < strlen(infix); i++) {
        char ch = infix[i];

        // If operand, add to postfix expression
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // If '(', push to stack
        else if (ch == '(') {
            push(ch);
        }
        // If ')', pop from stack to output until '(' is found
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        }
        // If operator, pop from stack to output based on precedence
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining operators from stack
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
    printf("Postfix Expression: %s\n", postfix);
}

// Main function
int main() {
    char infix[MAX];
    
    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);

return 0;
}
