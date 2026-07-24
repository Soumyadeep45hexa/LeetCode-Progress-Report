
int firstUniqueEven(int* nums, int numsSize) {
    int *ans=(int *)calloc(102,sizeof(int));
    int returnSize=102;
    int *ref=(int *)malloc(returnSize*sizeof(int));
    int k=0;

    for (int i=0;i<numsSize;i++){
        if (nums[i]%2==0){
            ans[nums[i]]+=1;
        }
    }
    for (int i=0;i<102;i++){
        if (ans[i]==1){
           ref[k++]=i;
            
        }
    }
    returnSize=k;
   for (int i=0;i<numsSize;i++){
    if (nums[i]%2==0){
        for (int j=0;j<returnSize;j++){
            if (ref[j]==nums[i]){
                return nums[i];
            }
        }
    }
   }
  
   
    return -1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna