int compare(void const *a,void const *b) {
    return (*(int *)a-*(int *)b);
}
void nextPermutation(int* nums, int numsSize) {
   
    int i = 0;
    for (i = numsSize - 1; i > 0; i--) {   
        if (nums[i] > nums[i - 1]) {
            break;
        }
    }

    
    if (i == 0){
       qsort(nums,numsSize,sizeof(int),compare) ;
       return ;}

    int j = 0;
    for (j = numsSize - 1; j >= 0; j--) {
        if (nums[j] > nums[i - 1]) {
            break;
        }
    }

    int temp = nums[i - 1];
    nums[i - 1] = nums[j];
    nums[j] = temp;

   int left = i;
int right = numsSize - 1;

while (left < right) {
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
    left++;
    right--;
}
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna