#include <stdio.h>

int isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                return 0;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    // Test Case 1: typical case
    char s1[] = "()[]{}";

    printf("Test 1: %s\n",
           isValid(s1) ? "true" : "false");

    // Test Case 2: edge case with mismatched brackets
    char s2[] = "(]";

    printf("Test 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}