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
    // Test Case 1: typical case
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    // Test Case 2: edge case with no zeroes
    int nums2[] = {1, 2, 3};

    moveZeroes(nums2, 3);

    printf("Test 2: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}