void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
   
    int len=m+n;
    for (int i=0;i<n;i++){
        nums1[m+i]=nums2[i];
    }
    for (int j=0;j<len;j++){
        for (int i=0;i<(len-j-1);i++){
            if (nums1[i]>nums1[i+1]){
                int temp=nums1[i];
                nums1[i]=nums1[i+1];
                nums1[i+1]=temp;
            }
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna