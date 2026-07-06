// Time complexity: O(n^2) - inefficient for large input sizes
// Space complexity: O(1)
// The current approach checks each interval against all others, leading to quadratic time complexity.
// Optimal solution would sort intervals by start time (and end time in descending order for same starts) then process in O(n) time after sorting.

int removeCoveredIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    
    int temp=intervalsSize;
    int j=0,k=intervalsSize-1;
  
   while(j<=k){ 
    int p=intervals[j][0];
   int q=intervals[j][1];
    for (int i=0;i<intervalsSize;i++){
        if (intervals[i][0] <= intervals[j][0] &&
                intervals[j][1] <= intervals[i][1]) {
                if (intervals[i][0] == intervals[j][0] &&
                    intervals[i][1] == intervals[j][1])
                    continue;
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
