long long zeroFilledSubarray(int* nums, int numsSize) {
 long long int sum=0;

    long long int count=0;
    for(int i=0;i<numsSize;i++){
        if (nums[i]==0){
            count++;
             
        }else if (nums[i]!=0){
             sum+=(count*(count+1))/2;
            count=0;
        }
    }
    sum+=(long long)(count*(count+1))/2;
    return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna