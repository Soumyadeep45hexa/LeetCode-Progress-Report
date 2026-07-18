/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *temp=(int *)calloc(numsSize+1,sizeof(int ));
    int *ans=(int *)malloc((*returnSize)*sizeof(int ));
    int k=0;
    for (int i=0;i<numsSize;i++){
        temp[nums[i]]+=1;
        if (temp[nums[i]]>1){
            ans[k++]=nums[i];
            
        }
    }
    *returnSize=k;
    free(temp);
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna