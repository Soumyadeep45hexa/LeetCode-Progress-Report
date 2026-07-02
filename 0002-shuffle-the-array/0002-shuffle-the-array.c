/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize=numsSize;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    
    for (int i=0;i<n;i++){
        ans[2*i]=nums[i];
        ans[2*i+1]=nums[i+n];
    }
   return ans; 
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna