//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

void moveZeroes(int* nums, int numsSize) {
    int pos = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    while(pos < numsSize) {
        nums[pos] = 0;
        pos++;
    }
}