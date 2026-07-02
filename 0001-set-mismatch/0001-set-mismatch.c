/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize=2;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    int count,k=1;
    while(k<=numsSize){
        count=0;
    for (int i=0;i<numsSize;i++){
        if (k==nums[i]){
            count++;
        }
            
        }
        if (count==2)
            ans[0]=k;
        else if (count==0)
            ans[1]=k;
    k++;
    }
    return ans;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna