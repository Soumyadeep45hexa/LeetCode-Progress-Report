int strStr(char* haystack, char* needle) {

if (needle[0] == '\0')
        return 0;
        int len=strlen(needle);
    for (int i=0;haystack[i]!='\0';i++){
    int flag=1;
    long long int j=0;
while(j<len){
    if (needle[j]!=haystack[i+j]){
       flag=0;
       break;
    }
    j++;
}
if (flag){
    return i;
}

}

return -1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna