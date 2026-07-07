int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int minPairSum(int* nums, int numsSize){
    qsort(nums, numsSize,sizeof(int),compare);
    int max = 0;
    int left =0,right=numsSize-1;
    // After sorting, check pairs (nums[i], nums[n-1-i])
   while(left<right){
    int sum=nums[left]+nums[right];
    if(sum>max){
        max=sum;
    }
    left++;
    right--;
   }
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna