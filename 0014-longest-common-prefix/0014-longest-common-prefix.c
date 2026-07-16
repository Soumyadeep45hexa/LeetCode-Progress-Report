char* longestCommonPrefix(char** strs, int strsSize) {
    
    int min = strlen(strs[0]);

for (int i = 1; i < strsSize; i++) {
    if (strlen(strs[i]) < min) {
        min = strlen(strs[i]);
    }
}
    int dupSize=min;
    char *str=(char *)malloc((dupSize+1)*sizeof(char ));
    int k=0;
for (int j = 0; j < min; j++) {
    char ch = strs[0][j];

    for (int i = 1; i < strsSize; i++) {
        if (strs[i][j] != ch) {
            str[k] = '\0';
            return str;
        }
    }

    str[k++] = ch;
}

str[k] = '\0';
return str;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna