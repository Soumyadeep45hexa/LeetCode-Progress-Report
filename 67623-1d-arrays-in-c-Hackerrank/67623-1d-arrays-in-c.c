#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d\n",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna