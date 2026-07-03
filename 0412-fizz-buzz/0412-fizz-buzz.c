/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char *str1="FizzBuzz";
    char *str2="Fizz";
    char *str3="Buzz";
    char **ans=(char **)malloc((*returnSize)*sizeof(char *));
    for(int i=1;i<=n;i++){
         
        if (i%3==0 && i%5==0){
            *(ans+i-1)=str1;
        }else if (i%3==0 ){
             *(ans+i-1)=str2;
        } else if ( i%5==0){
            *(ans+i-1)=str3;
        } else {
           *(ans+i-1) = (char *)malloc(12 * sizeof(char));
            sprintf(*(ans+i-1), "%d", i);
        }
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna