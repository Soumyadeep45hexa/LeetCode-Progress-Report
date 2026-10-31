/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int table[10001]={0};
 *returnSize = nums1Size;
int *ret = (int *)malloc((*returnSize) * sizeof(int));
int l=0;
int ref=0;
    for (int i=0;i<nums2Size;i++){
        table[nums2[i]]++;
    }
    for(int j=0;j<nums1Size;j++){
        int flag=0;
        if(table[nums1[j]]!=0){
            for (int i=0;i<nums2Size;i++){
                if (nums1[j]==nums2[i]){
                    ref=i;
                    break;
                    }
            }
            for(int k=ref+1;k<nums2Size;k++){
                if (nums2[k]>nums2[ref]){
                    ret[l++]=nums2[k];
                    flag=1;
                    break;
                }
            }
           if (flag==0)
                 ret[l++]=-1;
        }
    }
    return ret;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna