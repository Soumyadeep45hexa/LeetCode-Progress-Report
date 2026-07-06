void moveZeroes(int* nums, int numsSize) {
    int i=0,j=1;
    while(j<numsSize){
        if (nums[i]==0 && nums[j]!=0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
         if(j<=i){
                j=i+1;
            }
        }else if( nums[i]!=0){
            i++;
            if(j<=i){
                j=i+1;
            }
        }else{
           j++;
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna