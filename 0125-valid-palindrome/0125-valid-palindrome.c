bool isPalindrome(char* s) {
    
    int j=0;
    for (int i=0;s[i]!='\0';i++){
        if (isalnum(s[i])){
        s[j++]=tolower(s[i]);
        }
    }
    s[j]='\0';
    int left=0;
    int right=strlen(s)-1;

    while(left<right){
        if (s[left]!=s[right]){
            return false;
        }  left++;
            right--;
    }
    
    return true;
    }
 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna