/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) { 
    *returnSize=numsSize;
    int c=0;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    ans[c++]=nums[0];
    int count=1;
    for(int i=1;i<numsSize;i++){
        if (ans[c-1]==nums[i]){
            if (count < k) {
                ans[c++]=nums[i];
                count++;
            } else {
                continue;
            }
           
        }else{
            count=1;
            ans[c++]=nums[i];
            
        }
       
    }

    *returnSize=c;
     return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna