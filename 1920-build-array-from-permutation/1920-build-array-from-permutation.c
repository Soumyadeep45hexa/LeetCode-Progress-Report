/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *arr=(int *)malloc((*returnSize)*sizeof(int ));
    for (int i=0;i<numsSize;i++){
        arr[i]=nums[nums[i]];
    }
    return arr;
    }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna