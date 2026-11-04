int compare(const void *a, const void *b) {
    return (*(int *)b > *(int *)a) - (*(int *)b < *(int *)a);
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {

    int *ans = (int *)malloc(k * sizeof(int));

    int table[20001] = {0};
    int Size = 20001;

    for (int i = 0; i < numsSize; i++) {
        table[nums[i]+10001]++;
    }

    int p = 0;
    int *freq = (int *)malloc(Size * sizeof(int));

    for (int i = 0; i < Size; i++)
        freq[i] = table[i];

    qsort(table, Size, sizeof(int), compare);

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < Size; j++) {
            if (freq[j] == table[i] && freq[j] != -1) {
                ans[p] = j-10001;
                freq[j] = -1;
                break;
            }
        }
        p++;
    }

    *returnSize = k;
    free(freq);

    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna