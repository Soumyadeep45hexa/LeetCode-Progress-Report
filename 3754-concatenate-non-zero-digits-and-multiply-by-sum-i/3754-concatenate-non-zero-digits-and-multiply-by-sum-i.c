long long sumAndMultiply(int num) {
    
 long long int rev=0,sum=0,n=0;
    while(num){
        int d=num%10;
        sum+=d;
        rev=rev*10+d;
        num/=10;
    }
    while(rev){
        int d=rev%10;
        if (d>0){
         n=n*10+d;
         }
        rev/=10;
    }
    return (n*sum);
}
// ✅ Code is correct and passes all test cases.
// Time Complexity: O(log n) where n is the input number (digits processed once each).
// Space Complexity: O(1) (constant space usage).
// The approach correctly processes digits twice but achieves the correct result.
// Alternative optimization: Process digits in a single pass by checking non-zero during extraction.
// Current solution is acceptable and meets optimal complexity for the problem constraints.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna