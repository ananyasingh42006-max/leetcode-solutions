#include <stdio.h>
void reverseString(char* s, int sSize) {

    int start = 0;
    int end = sSize - 1;

    while (start < end) {

        char temp = s[start];

        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {

    char word1[] = "hello";

    reverseString(word1, 5);

    printf("Test Case 1: %s\n", word1);


    char word2[] = "a";

    reverseString(word2, 1);

    printf("Test Case 2: %s\n", word2);


    return 0;
}