int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int *ans = (int*)malloc(2 * sizeof(int));

    // Find duplicate
    for (int i = 1; i <= numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == i)
                count++;
        }

        if (count == 2)
            ans[0] = i;
        else if (count == 0)
            ans[1] = i;
    }

    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna