#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    for (int i = 0; i < numsSize; i++) {

        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {

                int* answer = malloc(2 * sizeof(int));

                answer[0] = i;
                answer[1] = j;

                *returnSize = 2;

                return answer;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main() {

    int nums1[] = {2, 7, 11, 15};

    int size1;

    int* answer1 = twoSum(nums1, 4, 9, &size1);

    printf("Test Case 1: %d %d\n", answer1[0], answer1[1]);


    int nums2[] = {3, 3};

    int size2;

    int* answer2 = twoSum(nums2, 2, 6, &size2);

    printf("Test Case 2: %d %d\n", answer2[0], answer2[1]);


    return 0;
}