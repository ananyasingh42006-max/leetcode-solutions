#include <stdio.h>
int search(int* nums, int numsSize, int target) {

    int start = 0;
    int end = numsSize - 1;

    while (start <= end) {

        int middle = (start + end) / 2;

        if (nums[middle] == target) {
            return middle;
        }

        if (nums[middle] < target) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return -1;
}

int main() {

    int numbers1[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 1: %d\n",
           search(numbers1, 6, 9));


    int numbers2[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 2: %d\n",
           search(numbers2, 6, 2));


    return 0;
}