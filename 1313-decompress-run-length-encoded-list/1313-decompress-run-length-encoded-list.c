/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    // int *sub=(int *)malloc(2*sizeof(int));
    *returnSize = 0;
for (int i = 0; i < numsSize; i += 2) {
    *returnSize += nums[i];
}

    int *ans=(int *)malloc((*returnSize)*sizeof(int ));
    int k=0;
    int freq=0;
    int val=1;
    int l=0;
    while(val<numsSize){
        
        // sub[0]=; //frequecy 
        // sub[1]=;  //value
        for (int i=0;i<nums[freq];i++){
            ans[k++]=nums[val];
        }
        l++;
        val=2*l+1;
        freq=2*l;
        
    }
    *returnSize=k;
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna