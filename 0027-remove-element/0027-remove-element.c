int removeElement(int* nums, int numsSize, int val) {
    int j=0;
    for(int i=0;i<numsSize;i++){
        if (nums[i]!=val){
            nums[j++]=nums[i];
            
        }
        
    }
    return j;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna