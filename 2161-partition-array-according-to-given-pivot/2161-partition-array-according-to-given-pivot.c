/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize=numsSize;
    
    int dup=0,count=0;
    int *ans=(int *)malloc(((*returnSize))*sizeof(int));
    int k=0;
    for (int i=0;i<numsSize;i++){
        if (nums[i]<pivot){
            ans[k++]=nums[i];
            
        }
        
    }
    for (int i=0;i<numsSize;i++){
        if (nums[i]==pivot){
            ans[k++]=nums[i];
        }
        
    }
    
    for (int i=0;i<numsSize;i++){
        if (nums[i]>pivot){
            ans[k++]=nums[i];
        }
        
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna