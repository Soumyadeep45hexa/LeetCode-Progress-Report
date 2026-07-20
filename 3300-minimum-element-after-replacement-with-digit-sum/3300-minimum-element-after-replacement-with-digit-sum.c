int minElement(int* nums, int numsSize) {
    int min=nums[0];
    for (int i=0;i<numsSize;i++){
        int sum=0;
        while(nums[i]){
            int d=nums[i]%10;
            sum+=d;
            nums[i]/=10;
        }
        nums[i]=sum;
        if (nums[i]<min){
            min=nums[i];
        }

    }
    
    return min;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna