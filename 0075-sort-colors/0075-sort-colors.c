// int compare(void const *a,void const *b){
//     return *(int *)a-*(int *)b;
// }
void sortColors(int* nums, int numsSize) {
    // for (int i=0;i<numsSize;i++){
    //     for (int j=0;j<numsSize-i-1;j++){
    //         if (nums[j]>=nums[j+1]){
    //             int temp=nums[j];
    //             nums[j]=nums[j+1];
    //             nums[j+1]=temp;
    //         }
    //     }
    // }
    // qsort(nums,numsSize,sizeof(int),compare);
    //selction Sort
    // for (int i=0;i<numsSize;i++){
    //     int min=i;
    //   for (int j=i+1;j<numsSize;j++){
    //     if (nums[j]<=nums[min]){
    //         min=j;
    //     }
    //   }
    //     int temp=nums[min];
    //     nums[min]=nums[i];
    //     nums[i]=temp;
    //   }
      //Merge Sort 
      for (int i=0;i<numsSize;i++){
        int j=i;
        while(j>0 && nums[j]<=nums[j-1]){
            int temp=nums[j-1];
             nums[j-1]=nums[j];
             nums[j]=temp;
             j--;
      }

        }
      }


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna