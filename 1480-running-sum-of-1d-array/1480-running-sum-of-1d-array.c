/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
     *returnSize=numsSize;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    
    int sum=0;
    for (int i=0;i<numsSize;i++){
     sum=sum+nums[i];
        ans[i]=sum;
    }
   
    return ans;
    }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna