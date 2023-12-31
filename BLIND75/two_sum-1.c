#include <cstddef>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int *)malloc(2*sizeof(int));
    for(int i = 0; i<numsSize; i++){
        int remain = target - nums[i];
        for(int j = i+1; j<numsSize; j++){
            if(nums[j] == remain){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}