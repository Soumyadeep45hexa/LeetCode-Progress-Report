/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
 int k=0;

    for (int i=0;i<numsSize;i++){
        int index=abs(nums[i])-1;
        if (nums[index]>0){
            nums[index]=-nums[index];
        }
    } int *ans=(int *)malloc(numsSize*sizeof(int));
        for (int j=0;j<numsSize;j++){
            if (nums[j]>0){
                ans[k++]=j+1;
            }
        }
    
     *returnSize=k;
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna