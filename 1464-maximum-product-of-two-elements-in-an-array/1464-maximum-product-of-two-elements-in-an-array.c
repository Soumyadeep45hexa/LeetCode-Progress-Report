int compare(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int maxProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int MaxSum=(nums[numsSize-1]-1)*(nums[numsSize-2]-1);
return MaxSum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna