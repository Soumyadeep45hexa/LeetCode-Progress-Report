/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    
    *returnSize=2;
    int *ans=(int *)malloc((*returnSize)*sizeof(int));
    int k=0;
    int left=1;
    int right=numsSize;
while(left<right){
    if ((nums[left-1]+nums[right-1])<target){
        left++;
    }else if ((nums[left-1]+nums[right-1])>target){
        right--;
    }else{
        ans[0]=left;
        ans[1]=right;
        break;
    }
}
return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna