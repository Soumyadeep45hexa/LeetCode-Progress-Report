int maximumValue(char** strs, int strsSize) {

    
    int max=0;
    for (int i=0;i<strsSize;i++){
        int count=0;
        for (int j=0;j<strlen(strs[i]);j++){
           
          if (isdigit(strs[i][j])) {
    count = count * 10 + (strs[i][j] - '0');
         }else{
            count=strlen(strs[i]);
            break;
        }
        }
        if (count>max){
            max=count;
        }
    }
    return max;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna