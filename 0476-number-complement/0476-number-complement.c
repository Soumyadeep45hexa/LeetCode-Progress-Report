int findComplement(int num) {

    int *binary=(int *)malloc(32*sizeof(int));
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
for (int j=0;j<i;j++){
    binary[j]^=1;
}
int sum=0;
for (int k=0;k<i;k++){
    sum+=binary[k]*(1<<k);
}
return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna