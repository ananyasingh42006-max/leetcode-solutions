#include <string.h>
#include <stdio.h>

int isAnagram(char* s, char* t) {

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {

        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}


int main() {

    printf("Test Case 1: ");

    if (isAnagram("anagram", "nagaram")) {
        printf("true\n");
    } else {
        printf("false\n");
    }


    printf("Test Case 2: ");

    if (isAnagram("rat", "car")) {
        printf("true\n");
    } else {
        printf("false\n");
    }


    return 0;
}