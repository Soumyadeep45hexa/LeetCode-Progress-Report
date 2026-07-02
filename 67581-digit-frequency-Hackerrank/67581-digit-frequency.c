#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    char str[1240], ch;

    scanf("%s", str);

    for (int k = 0; k < 10; k++) {   
        int count = 0;               
        int i = 0;                   

        while ((ch = str[i]) != '\0') {
            int f = ch - '0';

            if (arr[k] == f) {
                count++;
            }

            i++;
        }

        printf("%d ", count);
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna