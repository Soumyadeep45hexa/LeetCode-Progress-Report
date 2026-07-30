int addDigits(int num) {
while (num>9){
    int sum=0;
    while(num){
    int d=num%10;
    sum=sum+d;
    num/=10;
    }
    num=sum;
}
return num;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna