char* addSpaces(char* s, int* spaces, int spacesSize) {
    int len=strlen(s)+spacesSize;
    char *ans=(char *)malloc((len+1)*sizeof(char ));
    int k=0;
    int j=0;
    for (  int i=0;i<len;i++){
       
        if (k<spacesSize && j==spaces[k]){
            ans[i]=' ';
            k++;
            
        }
        else {
            ans[i]=s[j];
            j++;
        }
    }
    ans[len]='\0';
   
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna