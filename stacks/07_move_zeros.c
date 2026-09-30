#include <stdio.h>
void moveZeroes(int* nums, int numsSize) {

    int position = 0;

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] != 0) {

            nums[position] = nums[i];

            position++;
        }
    }

    while (position < numsSize) {

        nums[position] = 0;

        position++;
    }
}
int main() {

    int numbers1[] = {0, 1, 0, 3, 12};

    moveZeroes(numbers1, 5);

    printf("Test Case 1: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers1[i]);
    }

    printf("\n");


    int numbers2[] = {0, 0, 1};

    moveZeroes(numbers2, 3);

    printf("Test Case 2: ");

    for (int i = 0; i < 3; i++) {
        printf("%d ", numbers2[i]);
    }

    printf("\n");


    return 0;
}