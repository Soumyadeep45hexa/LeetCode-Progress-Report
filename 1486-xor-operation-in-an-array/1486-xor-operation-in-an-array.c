int xorOperation(int n, int start) {
    int *ans=(int *)malloc(n*sizeof(int));
    
   
        for (int i=0;i<n;i++){
            ans[i]=(start+2*i);
        }
        int result =ans[0];
    for(int i=1;i<n;i++){
     result^=ans[i];
    }
    free(ans);
return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna