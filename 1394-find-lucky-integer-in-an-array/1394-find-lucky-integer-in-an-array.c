int findLucky(int* arr, int arrSize) {
    int max=-1,count;
    for (int i=0;i<arrSize;i++){
        count=1;
        for (int j=0;j<arrSize;j++){
            if (i==j){
                continue;
            }
            if (arr[i]==arr[j]){
                count++;
            }
            
        }
        if (count==arr[i] && count>max){
            max=count;
        }
    }
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna