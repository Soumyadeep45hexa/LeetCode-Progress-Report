bool canConstruct(char* ransomNote, char* magazine) {
    int *rN=(int *)calloc(26,sizeof(int));
    int *M=(int *)calloc(26,sizeof(int));
    int lenrN=strlen(ransomNote);
    int lenM=strlen(magazine);
    for (int i=0;i<lenrN;i++){
        rN[ransomNote[i]-'a']+=1;
    }
    for (int i=0;i<lenM;i++){
        M[magazine[i]-'a']+=1;
    }
    for (int i=0;i<26;i++){
        if (rN[i]>M[i]){
         
            return false;
        }
    }
    return true;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna