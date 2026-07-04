/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize=candiesSize;
    bool *op=(bool *)malloc((*returnSize)*sizeof(bool));
    int flag=1;
    for (int i=0;i<candiesSize;i++){
        for (int j=0;j<candiesSize;j++){
            if (candies[j]>(candies[i]+extraCandies)){
                flag=0;
            }
        }
        if (!flag){
            op[i]=false;
            flag=1;
        }else{
            op[i]=true;
        }
    }
    return op;
    }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna