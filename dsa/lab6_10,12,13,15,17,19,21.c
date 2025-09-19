//10. Write a program to reverse a string using a stack implemented with arrays.


#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }
    printf("Reversed string: ");
    for (int i = 0; i < len; i++) {
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}

//12. Write a program in c to reverse an integer array using a stack (implemented with array).



#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    int arr[MAX], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        push(arr[i]);
    }
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = pop();
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


//13.check whether a given expression has balanced parentheses using a stack

#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(char expr[]) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            char popped = pop();
            if (!isMatchingPair(popped, expr[i])) {
                return 0;
            }
        }
    }
    return top == -1;
}

int main() {
    char expr[MAX];
    printf("Enter expression: ");
    scanf("%s", expr);
    if (isBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
    return 0;
}


//15. Write a program in C to convert an infix expression to a postfix expression using a stack.

#include <stdio.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void infixToPostfix(char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (isdigit(c)) {
            printf("%c", c);
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (top != -1 && peek() != '(') {
                printf("%c", pop());
            }
            pop();
        } else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                printf("%c", pop());
            }
            push(c);
        }
    }
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    char expr[MAX];
    printf("Enter infix expression: ");
    scanf("%s", expr);
    printf("Postfix expression: ");
    infixToPostfix(expr);
    return 0;
}


//17. Write a program in C to convert an infix expression to a prefix expression using a stack.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void swapBrackets(char* str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') str[i] = ')';
        else if (str[i] == ')') str[i] = '(';
    }
}

void infixToPostfix(char* expr, char* result) {
    int k = 0;
    for (int i = 0; expr[i]; i++) {
        char c = expr[i];
        if (isalnum(c)) {
            result[k++] = c;
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (top != -1 && peek() != '(') {
                result[k++] = pop();
            }
            pop();
        } else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                result[k++] = pop();
            }
            push(c);
        }
    }
    while (top != -1) {
        result[k++] = pop();
    }
    result[k] = '\0';
}

int main() {
    char expr[MAX], postfix[MAX];
    printf("Enter infix expression: ");
    scanf("%s", expr);

    reverse(expr);
    swapBrackets(expr);
    infixToPostfix(expr, postfix);
    reverse(postfix);

    printf("Prefix expression: %s\n", postfix);
    return 0;
}


//19. Write a program in C to evaluate a postfix expression.

#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int evaluate(char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (isdigit(c)) {
            push(c - '0');
        } else {
            int b = pop();
            int a = pop();
            switch (c) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }
    return pop();
}

int main() {
    char expr[MAX];
    printf("Enter postfix expression: ");
    scanf("%s", expr);
    int result = evaluate(expr);
    printf("Result: %d\n", result);
    return 0;
}


//21. Write a program in C to evaluate a prefix expression.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int evaluate(char* expr) {
    int len = strlen(expr);
    for (int i = len - 1; i >= 0; i--) {
        char c = expr[i];
        if (isdigit(c)) {
            push(c - '0');
        } else {
            int a = pop();
            int b = pop();
            switch (c) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }
    return pop();
}

int main() {
    char expr[MAX];
    printf("Enter prefix expression: ");
    scanf("%s", expr);
    int result = evaluate(expr);
    printf("Result: %d\n", result);
    return 0;
}

