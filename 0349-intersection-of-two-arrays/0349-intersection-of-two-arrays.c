/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // int realloc=0;
    // if (nums1Size>nums2Size){
    //     realloc=nums2Size;
    //         }else{
    //             realloc=nums1Size;
    //         }
    int *hash=(int *)calloc(1001,sizeof(int ));
    *returnSize=nums1Size+nums2Size;
    int *ans=(int *)malloc((*returnSize)*sizeof(int ));
    int k=0;
    for (int i=0;i<nums1Size;i++){
        for (int j=0;j<nums2Size;j++){
            if (nums1[i]==nums2[j]){
                hash[nums2[j]]+=1;
                
            }
        }
    }
    for (int i=0;i<=1000;i++){
        if (hash[i]>0){
            ans[k++]=i;
        }
    }
    *returnSize=k;
    free(hash);
    return ans;

}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna