int hammingDistance(int x, int y) {
    int  bin=x^y;
    int count=0;
     for (int i = 31; i >= 0; i--) {
        if ((bin >> i) & 1)
            count++;
     }
    return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna