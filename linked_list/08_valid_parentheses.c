#include <stdio.h>
int isValid(char* s) {

    char stack[10000];

    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' ||
            s[i] == '[' ||
            s[i] == '{') {

            top++;

            stack[top] = s[i];
        }

        else {

            if (top == -1) {
                return 0;
            }

            if (s[i] == ')' && stack[top] != '(') {
                return 0;
            }

            if (s[i] == ']' && stack[top] != '[') {
                return 0;
            }

            if (s[i] == '}' && stack[top] != '{') {
                return 0;
            }

            top--;
        }
    }

    if (top == -1) {
        return 1;
    }

    return 0;
}

int main() {

    printf("Test Case 1: ");

    if (isValid("()[]{}")) {
        printf("true\n");
    } else {
        printf("false\n");
    }


    printf("Test Case 2: ");

    if (isValid("(]")) {
        printf("true\n");
    } else {
        printf("false\n");
    }


    return 0;
}