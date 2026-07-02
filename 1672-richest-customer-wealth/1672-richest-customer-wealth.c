int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int col=*accountsColSize;
    int sum1=0,sum;
    for (int i=0;i<accountsSize;i++){
        sum=0;
        for (int j=0;j<col;j++){
            sum+=accounts[i][j];
        }
        if(sum1<sum){
            sum1=sum;
        }
    }
    return sum1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna