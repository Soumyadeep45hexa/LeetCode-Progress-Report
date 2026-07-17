bool isValid(char* s) {
    int len=strlen(s);
   if (len == 0)
    return true;
   char *stack =(char *)malloc(len*sizeof (char));
   int i=1;
   int top=-1;
   stack[++top]=s[0];
   if (stack[top]=='}' || stack[top]==']' || stack[top]==')'){
    return false; 
   }
   while(i<len){
    
   if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        stack[++top] = s[i];
    }else {
        if (top==-1){
            return false;
        }
        if ((stack[top] == '(' && s[i] == ')') ||
            (stack[top] == '[' && s[i] == ']') ||
            (stack[top] == '{' && s[i] == '}')) {
            top--;
        }else{
            return  false;
        }
        
    }

    i++;
}
   return top==-1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna