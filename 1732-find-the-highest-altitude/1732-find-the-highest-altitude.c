int largestAltitude(int* gain, int gainSize) {
    int *ans=(int *)malloc((gainSize+1)*sizeof(int));
    int k=1;
    ans[0]=0;
    int max=0;
    for (int i=0;i<gainSize;i++){
        ans[k]=ans[k-1]+gain[i];
        k++;
    }
    for (int i=0;i<gainSize+1;i++){
        if(ans[i]>max){
            max=ans[i];
        }
    }
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna