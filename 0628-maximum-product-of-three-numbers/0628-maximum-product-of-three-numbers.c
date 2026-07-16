int compare(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int maximumProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
  int n=numsSize;
  int pdt1=nums[n-1]*nums[n-2]*nums[n-3];
  int pdt2=nums[n-1]*nums[0]*nums[1];  
    return pdt1>pdt2?pdt1:pdt2;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna