#include <stdio.h>
char* longestCommonPrefix(char** strs, int strsSize) {

    static char answer[201];

    int position = 0;

    while (strs[0][position] != '\0') {

        char current = strs[0][position];

        for (int i = 1; i < strsSize; i++) {

            if (strs[i][position] != current) {

                answer[position] = '\0';

                return answer;
            }
        }

        answer[position] = current;

        position++;
    }

    answer[position] = '\0';

    return answer;
}

int main() {

    char* words1[] = {
        "flower",
        "flow",
        "flight"
    };

    printf("Test Case 1: %s\n",
           longestCommonPrefix(words1, 3));


    char* words2[] = {
        "dog",
        "cat",
        "fish"
    };

    printf("Test Case 2: %s\n",
           longestCommonPrefix(words2, 3));


    return 0;
}