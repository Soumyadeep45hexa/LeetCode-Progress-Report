char findTheDifference(char* s, char* t) {
    if (strlen(s)==0){
       return t[0];
    }
    int flg;
    int i;
    for (i=0;t[i]!='\0';i++){
        flg=0;
        for(int j=0;s[j]!='\0';j++){
            if(t[i]==s[j]){
                flg=1;
                s[j]='#';
                break;
            }else{
                flg=0;
            }
        } 
        if  (flg==0)
           break;
    }
    return t[i];
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna