int maximumLengthSubstring(char* s) {
    int len=strlen(s);
    int left=0;
    int *hash=(int *)calloc(26,sizeof(int));
    int count=0;

  for (int right=0;s[right]!='\0';right++){
        hash[s[right]-'a']++;
        while (hash[s[right]-'a'] >2){
            hash[s[left]-'a']--;
            left++;
        }
        int len=right-left+1;
        if (len>count){
            count=len;
        }
    }
 return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna