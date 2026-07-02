int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int countm=0,count=0;
    for (int i=0;i<numsSize;i++){
        if (nums[i]!=0){
            count++;
            }else{
                count=0;
            }
            if (countm<count){
                countm=count;
        }
    }
    return countm;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna