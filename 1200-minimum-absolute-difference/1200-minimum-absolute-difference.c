/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 int compare(void const *a,const void *b){
    return *(int *)a-*(int *)b;
 }
int** minimumAbsDifference(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

int **ans = (int **)malloc((numsSize - 1) * sizeof(int *));

// Allocate memory for each pair (2 integers)
for (int i = 0; i < numsSize - 1; i++) {
    ans[i] = (int *)malloc(2 * sizeof(int));
}

// Allocate memory for returnColumnSizes
*returnColumnSizes = (int *)malloc((numsSize - 1) * sizeof(int));

// Every returned row has exactly 2 columns
for (int i = 0; i < numsSize - 1; i++) {
    (*returnColumnSizes)[i] = 2;
}
    int k=0;
//sorting 
    qsort(nums,numsSize,sizeof(int ),compare);
    //finding least differnce 
    int min=nums[1]-nums[0];
    for (int i=0;i<numsSize-1;i++){
        if (nums[i+1]-nums[i]<min){
        min=nums[i+1]-nums[i];
        }
    }

    for (int i=0;i<numsSize-1;i++){
       
            if (nums[i+1]-nums[i]==min){
                ans[k][0]=nums[i];
                ans[k][1]=nums[i+1];
                k++;
    }
    }
        *returnSize=k;
        return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna