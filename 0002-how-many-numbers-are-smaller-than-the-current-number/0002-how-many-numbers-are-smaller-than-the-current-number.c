/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize,int*returnSize) {
    int count;
    *returnSize=numsSize;
    int *ans =(int *)malloc((*returnSize)*sizeof(int));
    for (int i=0;i<numsSize;i++){
        count=0;
        for(int j=0;j<numsSize;j++){
            if (nums[i]>nums[j]){
                count++;
            }
        }
        ans[i]=count;
    } 
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna