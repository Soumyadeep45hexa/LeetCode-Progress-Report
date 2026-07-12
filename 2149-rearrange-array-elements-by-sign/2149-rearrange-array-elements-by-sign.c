/** * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    int pos=0;
    int neg=1;
    for (int i=0;i<numsSize;i++){
        if (nums[i]>0){
            // fix this
            ans[pos] = nums[i]; 
            pos=pos+2;
        }else if (nums[i]<0){
            // fix this
            ans[neg] = nums[i]; 
            neg=neg+2;
        }
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna