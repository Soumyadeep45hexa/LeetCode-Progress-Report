char* removeDuplicates(char* s) {
    int len=strlen(s);
    int top=-1;
    int k=len+1;
    char *ans=(char *)malloc(k*sizeof(char));
    
   

    ans[++top]=s[0];
    for (int i=1;i<len;i++){
        if ( top>=0 && ans[top]==s[i]){
            top--;
        }else{
            top++;
            ans[top]=s[i];
        }
    }
    ans[top+1]='\0';
  
    k=top+1;
    
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna