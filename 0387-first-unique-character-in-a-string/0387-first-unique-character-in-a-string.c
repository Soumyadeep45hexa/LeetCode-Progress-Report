int firstUniqChar(char* s) {
    int len=strlen(s);
    int *ans=(int *)calloc(26,sizeof(int));
    for (int i=0;i<len;i++){
        ans[s[i]-'a']+=1;
    }  
   for(int i=0;i<len;i++){
    if (ans[(s[i]-'a')]==1){
        return i;
    }
   }
   return -1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna