bool detectCapitalUse(char* word) {
    int length=strlen(word),count=0;
 
    for (int i=0;word[i]!='\0';i++){
        if (isupper(word[i])){
            count++;
        }
    }
 
    if (count ==length || count==0){
        return true;
    }else if(isupper(word[0]) && count==1){
        return true ;
    }else{
    return false;
    }
    // Time Complexity: O(n) where n is the length of the word.
    // Space Complexity: O(1) extra space.
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna