int compare (void const *a,void const *b){
    return (*(int *)a-*(int *)b);
}
bool check(int* nums, int numsSize) {
    int *dup=(int *)malloc(numsSize*sizeof(int));
    for (int i=0;i<numsSize;i++){
        dup[i]=nums[i];
    }
    qsort(nums,numsSize,sizeof(int),compare);
           bool same1 = true;

for (int j = 0; j < numsSize; j++) {
    if (nums[j] != dup[j]) {
        same1 = false;
        break;
    }
}
   if (same1)
          return true;
    int *ans=(int *)malloc(numsSize*sizeof(int));
    
    for (int i=1;i<numsSize;i++){
      for (int k = 0; k < numsSize; k++) {
    ans[k] = nums[(i + k) % numsSize];
}
        
        bool same = true;

for (int j = 0; j < numsSize; j++) {
    if (ans[j] != dup[j]) {
        same = false;
        break;
    }
}
if (same)
        return true;
        
    }
    


return false;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna