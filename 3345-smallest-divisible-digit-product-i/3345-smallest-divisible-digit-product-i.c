int smallestNumber(int n, int t) {
    while(1){
int pro=1;
int temp=n;
        while(temp){
            int val=temp%10;
            pro=pro*val;
            temp/=10;
        }
        if (pro%t==0){
            return n;
        }n++; 
    }
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna