int missingNumber(int* nums, int numsSize) {
    for (int j=1;j<=numsSize;j++){
        int flag=0;
        for (int i=0;i<numsSize;i++){
            if (nums[i]==j){
                flag=1;
                break;
            }
        }
        if (flag==0){
            return j;
        }
    }
    return 0;
}

// ✅ Code is correct but suboptimal
// Time Complexity: O(n²) - nested loops checking each number
// Space Complexity: O(1)
// 
// 🚀 Optimal approach would be O(n) time and O(1) space using:
// 1. Sum formula: expected_sum = n*(n+1)/2 - sum(nums)
// 2. XOR approach: XOR all 1..n and array elements
// 
// For example optimized version:
// int missingNumber(int* nums, int numsSize) {
//     int total = numsSize * (numsSize + 1) / 2;
//     for (int i = 0; i < numsSize; i++) {
//         total -= nums[i];
//     }
//     return total;
// }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna