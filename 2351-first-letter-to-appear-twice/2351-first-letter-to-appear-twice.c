char repeatedCharacter(char* s) {
    int len=strlen(s);
    int min=0;
    int *ans=(int *)calloc(26,sizeof(int));
    for (int i=0;i<len;i++){
        ans[s[i]-'a']+=1;
        if (ans[s[i]-'a']>1){
            min=i;
           break;
        }
    }
    for (int i=0;i<len;i++){
        if (min==i){
            return s[i];
        }
    }
    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna