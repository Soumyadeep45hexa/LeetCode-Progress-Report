char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char *str=(char *)malloc((wordsSize+1)*sizeof(char ));
  
    int k=0;
    for (int i=0;i<wordsSize;i++){
        int len=strlen(words[i]);
        int sum=0;
        for(int j=0;j<len;j++){
            sum+=weights[words[i][j]-'a'];
        }
        int value=sum%26;
        str[k++]='z'-value;
    }
    str[k]='\0';
    return  str;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna