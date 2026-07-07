int singleNumber(int* nums, int L) {
  // Your current implementation uses a double loop to count occurrences.
  // Time Complexity: O(N^2) where N = L (each element is compared with every other).
  // Space Complexity: O(1) extra space (only a few integer variables).
  // This works for the problem constraints, but there is a more optimal solution.
  // Hint: Since every element appears exactly twice except one, you can use XOR.
  // XOR property: a ^ a = 0 and a ^ 0 = a. XOR-ing all numbers cancels out pairs,
  // leaving the unique number. This yields O(N) time and O(1) space.
  // Example snippet (not integrated into your current logic):
  // int result = 0; for (int i = 0; i < L; ++i) result ^= nums[i]; // result is the single number
  // Edge case handling: when L == 1 you return 1, which is incorrect.
  // It should return the only element (nums[0]) because the problem asks for the single number.
  if (L==1){
    // Edge case: only one element, that element is the answer.
    return nums[0]; // <-- bug: should be nums[0]
  }
  int count;
  for (int i=0;i<L;i++){
    count=0;
    for (int j=0;j<L;j++){
        if (i==j){
            continue;
        }
        if (nums[i]==nums[j]){
            count++;
        }
    }
    if (count==0){
        return nums[i];
    }
  }
  return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna