int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}


int rangeSum(int* nums, int numsSize, int n, int left, int right) {
    long long int sum=0;
   
   int *ans = ( int*)malloc(numsSize * (numsSize + 1) / 2 * sizeof( int)); 
   int k=0;
    for (int i = 0; i < numsSize; i++) {
        sum = 0;
        for (int j = i; j < numsSize; j++) {
            sum += nums[j];
            ans[k++] = sum;
        }
    }

    qsort(ans, k, sizeof(int), compare);
    sum=0;
    const int MOD = 1000000007;
    for (int i =left-1; i<right; i++) {
        sum =(sum+ ans[i])%MOD;
    }

    free(ans);
    return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna