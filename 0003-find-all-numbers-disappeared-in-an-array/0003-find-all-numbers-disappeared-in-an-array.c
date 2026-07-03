/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
     long  long int k=0;
    
    int *ans=(int *)malloc(numsSize*sizeof(int));
    int temp;
    for (int i=1;i<=numsSize;i++){
        temp=0;
        for (int j=0;j<numsSize;j++){
            if (i==nums[j]){
                temp=1;
                break;
            }
        }
        if (temp==0){
       ans[k++]=i;
      
            }
    }
     *returnSize=k;
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna