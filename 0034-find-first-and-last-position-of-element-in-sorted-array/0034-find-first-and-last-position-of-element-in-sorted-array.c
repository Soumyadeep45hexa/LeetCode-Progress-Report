/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    
    int first=-1;
    int last=-1;
   
    
    for (int i=0;i<numsSize;i++){
        if (nums[i]==target){
            if (first==-1){
                first=i;
                
            }
            last=i;

        }
    }
     ans[0]=first;
    ans[1]=last;
  
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna