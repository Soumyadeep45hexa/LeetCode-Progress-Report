bool checkIfExist(int* arr, int arrSize) {
    for (int i=0;i<arrSize;i++){
        for (int j=0;j<arrSize;j++){
            if (i==j) continue;
            else {
                if (arr[i]==2*arr[j]) return true;
            }
        }
    }
    return false;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna