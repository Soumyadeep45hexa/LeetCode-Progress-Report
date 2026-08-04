/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare( const void *a, const void *b){
    return *(int *)a-*(int *)b;
 }
int* findMissingElements(int* nums, int numsSize, int* returnSize) {

     qsort(nums,numsSize,sizeof(int),compare);
//    int total = 0;
// for (int i = 0; i < numsSize - 1; i++) {
//     total += nums[i + 1] - nums[i] - 1;
// }
int k=0;
*returnSize=101;
int *mis = malloc((*returnSize)* sizeof(int));
   int i=0;
   while(i<numsSize-1){
    int missing =nums[i]+1;
        while(missing < nums[i+1]){
            mis[k++]=missing;
            missing++;
        }
        i++;
   }
    *returnSize=k;
    return mis;
    }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna