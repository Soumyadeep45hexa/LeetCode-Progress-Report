char* reverseVowels(char* s) {
char *temp = malloc(strlen(s) + 1);
int j = 0,count=0;

for (int i = 0; s[i] != '\0'; i++) {
    if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
        s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
        temp[j++] = s[i];
    }
}
temp[j] = '\0';
int left = 0;
int right = j - 1;

while (left < right) {
    char ch = temp[left];
    temp[left] = temp[right];
    temp[right] = ch;

    left++;
    right--;
}
for (int i = 0; s[i] != '\0'; i++) {
    if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
        s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            count++;
        s[i]=temp[count-1];
    }
}
return s;
free(temp);
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna