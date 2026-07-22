bool isMiddleElementUnique(int* nums, int numsSize) {
    int mid=(numsSize/2);
  
    int *ans =(int *)calloc(1000,sizeof(int ));

    for(int i=0;i<numsSize;i++){
        ans[nums[i]]+=1;
        if (ans[nums[mid]]>1){
            return false;
        }
    }
    return true;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna