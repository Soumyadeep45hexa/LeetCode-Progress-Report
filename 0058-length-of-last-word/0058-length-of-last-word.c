int lengthOfLastWord(char* s) {
    int count=0;
    int length=strlen(s);
    int i;

    while(s[length-1]==' ' && length>0){
            length--;
    }
    for ( i=length-1 ; i>=0 && s[i]!=' ';i--){ 
        
        count++;       
    }
    
    return count;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna