int compare( const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int maxProduct(int n) {
    int max=0;
    int returnSize=1000000001;
    int *ans=(int *)malloc(returnSize*sizeof(int ));
    int k=0;
    while(n){
        int d=n%10;
        ans[k++]=d;
        n/=10;
    }
    returnSize=k;
qsort(ans,returnSize,sizeof(int),compare);
int lastele=ans[returnSize-1];
for (int i=0;i<returnSize-1;i++){
    int pdt=ans[i]*lastele;
    if (pdt>max){
        max=pdt;
    }
}
return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna