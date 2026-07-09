char findTheDifference(char* s, char* t) {
    if (strlen(s)==0){
       return t[0];
    }
    char ans=0;
    int i;
    for (i=0;t[i]!='\0';i++){
        ans^=t[i];}
    for(int j=0;s[j]!='\0';j++){
        ans^=s[j];}
         
     
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna