int removeDuplicates(int* nums, int numsSize) {
    int k = numsSize;
    int count = 1;

    int i = 1;
    while (i < k) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > 2) {

            for (int j = i; j < k - 1; j++) {
                nums[j] = nums[j + 1];
            }
            k--;
            count--;

        } else {
            i++;
        }
    }

    return k;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna