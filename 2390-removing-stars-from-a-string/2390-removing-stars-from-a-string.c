char* removeStars(char* s) {
    int len=strlen(s);
   int returnSize=len+1;
    char *stack=(char *)malloc(returnSize*sizeof(char));
    int top=-1;
   
   for (int i = 0; i < len; i++) {
    if (s[i] == '*') {
        top--;
    } else {
        
        stack[++top] = s[i];
    }
}
stack[++top] ='\0';
    returnSize=top+1;
    return stack;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna