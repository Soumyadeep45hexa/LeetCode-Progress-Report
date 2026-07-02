/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    *returnSize=2;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
int w=1,l=0,div;
    while(w<=sqrt(area)){
        div=w;
        int rem=area%div;
        if(rem==0){
            l=area/div;
            ans[0]=l;
            ans[1]=div;
        }
        w++;
    }
    
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna