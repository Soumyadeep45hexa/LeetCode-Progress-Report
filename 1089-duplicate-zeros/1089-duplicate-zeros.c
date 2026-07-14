void duplicateZeros(int* arr, int n) {
    for (int i=0;i<n-1;i++){
        if (arr[i]==0){
         
            for (int j = n - 1; j > i; j--) {
    arr[j] = arr[j - 1];
}

arr[i + 1] = 0;
i++;
        }
    }
  
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna