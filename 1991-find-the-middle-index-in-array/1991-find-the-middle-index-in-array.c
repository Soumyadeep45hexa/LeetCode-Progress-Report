int findMiddleIndex(int* nums, int numsSize) {
  int Ls=0;
  int Rs=0,mid;
  for (int i=0;i<numsSize;i++){
    Rs=0;
    mid=i;
    if (i>0){
        Ls+=nums[i-1];
    }
    int j=numsSize-1;
    while(j>i){
        Rs+=nums[j];
        j--;
    }
    if (Rs==Ls){
    return mid;
  }
 }
  return -1;
}