#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int mid=(num/2)+1;
    int L=0;
    int R=num-1;
while(L<mid ){
    int temp=arr[R];
    arr[R]=arr[L];
    arr[L]=temp;
    
    L++;
    if (L==R){
        break;
    }
    R--;
}

    /* Write the logic to reverse the array. */

    for(int i =0; i <num; i++){
                printf("%d ", arr[i]);
     }
      return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna