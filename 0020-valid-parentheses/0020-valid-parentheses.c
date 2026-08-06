bool isValid(char* s) {
char st[10001]={0};
int len=strlen(s);
int top=-1;
char ch;
for (int i=0;i<len;i++){
    if (s[i]=='(' || s[i]=='{' || s[i]=='['){
        st[++top]=s[i];
    }else if(s[i]==')' || s[i]=='}' || s[i]==']'){
        if (top==-1){
            return false;
        }
        if ( (s[i]==')' && st[top]=='(') || 
            (s[i]=='}' && st[top]=='{') || 
            (s[i]==']' && st[top]=='[')){
                top--;
            }
        else{
            return false;
        }
    }
    
}
if (top==-1){
        return true;
    }else {
        return false;
    }
  
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna