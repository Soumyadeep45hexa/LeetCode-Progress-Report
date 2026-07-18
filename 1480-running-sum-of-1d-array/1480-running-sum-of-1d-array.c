/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc(numsSize*sizeof(int));
    ans[0]=nums[0];
    for (int i=1;i<numsSize;i++){
        ans[i]=ans[i-1]+nums[i];
    }
    *returnSize=numsSize;
    return ans;
    }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna