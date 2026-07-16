int hammingDistance(int x, int y) {
    int  bin=x^y;
    int count=0;
    while (bin) {
    if (bin & 1)
       count++;
    bin = bin >> 1;  
}
    return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna