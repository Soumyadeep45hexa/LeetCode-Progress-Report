
void sortColors(int* nums, int numsSize) {
    for (int i=0;i<numsSize;i++){
        for (int j=0;j<numsSize-i-1;j++){
            if (nums[j]>=nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna