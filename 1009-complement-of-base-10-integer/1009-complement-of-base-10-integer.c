int bitwiseComplement(int n) {
   int *ans=(int *)malloc(32*sizeof(int));
   int k=0;
   if (n==0)
   return 1;
   while(n){
    int d=n&1;
    ans[k++]=d^1;
    n>>=1;
   }
   int left=0;
   int right=k-1;
   while(left<right){
    int temp=ans[left];
    ans[left]=ans[right];
    ans[right]=temp;
    left++;
    right--;
     }
     int sum=0;
     int len=k-1;
     for (int i=0;i<=k-1;i++){
        
        sum+=ans[i]*pow(2,len);
        len--;
     }
     free(ans);
     return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna