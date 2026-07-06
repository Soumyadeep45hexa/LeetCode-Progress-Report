int removeCoveredIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    
    int temp=intervalsSize;
    int j=0,k=intervalsSize-1;
  
   while(j<=k){ 
    int p=intervals[j][0];
   int q=intervals[j][1];
    for (int i=0;i<intervalsSize;i++){
        
     if (i == j)
    continue;

if (intervals[i][0] <= p &&
    intervals[i][1] >= q) {
    temp--;
    break;
}
    }
    j++;
   }
return temp;

}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna