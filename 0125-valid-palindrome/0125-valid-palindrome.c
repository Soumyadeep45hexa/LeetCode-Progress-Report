bool isPalindrome(char* s) {
    char *str = (char *)malloc((strlen(s) + 1) * sizeof(char));
    int j=0;
    for (int i=0;s[i]!='\0';i++){
        if (isalnum(s[i])){
        str[j++]=tolower(s[i]);
        }
    }
    str[j]='\0';
    int left=0;
    int right=strlen(str)-1;

    while(left<right){
        if (str[left]!=str[right]){
            return false;
        }  left++;
            right--;
    }
    free(str);
    return true;
    }
 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna