int digitFrequencyScore(int n) {
int sum=0;
    while(n){
       int  d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna