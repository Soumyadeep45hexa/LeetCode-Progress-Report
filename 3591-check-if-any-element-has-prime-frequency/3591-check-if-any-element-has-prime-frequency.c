bool checkPrimeFrequency(int* nums, int numsSize) {
   int table[101] = {0};
int Size = 101;
   for (int i=0;i<numsSize;i++){
    //int j=nums[i]%Size;
    table[nums[i]]++;
   }

   for (int i = 0; i < Size; i++) {
    int flag = 0;

    if (table[i] <= 1)
        flag = 1;
    else {
        for (int j = 2; j * j <= table[i]; j++) {
            if (table[i] % j == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        return true;
}
return false;
}




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna