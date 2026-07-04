int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int heightChecker(int* heights, int heightsSize) {
    int count=0;
    int *height=(int *)malloc(heightsSize*sizeof(int));
    for (int i=0;i<heightsSize;i++){
       height[i]=heights[i];
    }
    qsort(heights,heightsSize,sizeof(int),compare);
    for (int i=0;i<heightsSize;i++){
        if (height[i]!=heights[i]){
            count++;
        }
    }
    free(height);
   return count;
}
// ✅ Code is correct but not optimal
// Time complexity: O(n²) due to Bubble Sort (suboptimal)
// Space complexity: O(n) for the copied array
// Optimal solution would use O(n log n) sorting (e.g., qsort)
// Final answer is correct (counts mismatches between original and sorted array)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna