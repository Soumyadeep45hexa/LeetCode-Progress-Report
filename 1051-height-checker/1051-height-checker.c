int heightChecker(int* heights, int heightsSize) {
    int count=0;
    int *height=(int *)malloc(heightsSize*sizeof(int));
    for (int i=0;i<heightsSize;i++){
       height[i]=heights[i];
    }
    for (int i=0;i<heightsSize;i++){
        for (int j=0;j<(heightsSize-i-1);j++){
            
            if (height[j]>height[j+1]){
                int temp=height[j];
                height[j]=height[j+1];
                height[j+1]=temp;
            }
            
            
        }
    }
    for (int i=0;i<heightsSize;i++){
        if (height[i]!=heights[i]){
            count++;
        }
    }
    free(height);
   return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna