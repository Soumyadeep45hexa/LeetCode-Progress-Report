int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int minPairSum(int* nums, int numsSize){
    qsort(nums, numsSize,sizeof(int),compare);
    int max = 0;
    // After sorting, check pairs (nums[i], nums[n-1-i])
    for (int i=0; i < numsSize/2; i++) {
        int currentSum = nums[i] + nums[numsSize - 1 - i];
        if (currentSum > max) {
            max = currentSum;
        }
    }
    // ✅ Correct approach: Sort array and pair smallest with largest elements
    // Time Complexity: O(n log n) due to sorting
    // Space Complexity: O(1) (ignoring stack space for qsort)
    // This is optimal as any better solution would require less than O(n log n) sorting
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna