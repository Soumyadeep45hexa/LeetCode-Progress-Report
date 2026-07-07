int singleNumber(int* nums, int L) {

  if (L==1){
    
    return nums[0]; 
  }
  int result = 0; 
  for (int i = 0; i < L; ++i) {
  result ^= nums[i];
}
return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna