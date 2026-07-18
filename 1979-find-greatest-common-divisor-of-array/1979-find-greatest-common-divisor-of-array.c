int findGCD(int* nums, int numsSize) {
    int min=nums[0];
    int max=0;
    for (int i=0;i<numsSize;i++){
        if (nums[i]>max){
            max=nums[i];
        }
    }
    for (int i=0;i<numsSize;i++){
        if (nums[i]<min){
            min=nums[i];
        }
    }
    int a=min;
    int b=max;
    while(b){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna