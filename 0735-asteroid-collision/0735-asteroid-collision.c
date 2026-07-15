/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 struct stack{
    int size;
    int top;
    int *arr;
 };
int* asteroidCollision(int* nums, int asteroidsSize, int* returnSize) {
    struct stack *sp = malloc(sizeof(struct stack));
    *returnSize=asteroidsSize;
    sp->size=*returnSize;
    sp->top=-1;
    sp->arr=(int *)malloc((sp->size)*sizeof(int));
for(int i=0;i<asteroidsSize;i++){
   int curr=nums[i];
   int alive =1;
   while(alive && sp->top !=-1 && sp->arr[sp->top]>0 && curr<0){
    if (sp->arr[sp->top]<abs(curr)){
        sp->top--;
    }else if (sp->arr[sp->top]==abs(curr)){
        alive=0;
        sp->top--;
    }else{
        alive--;
    }
   }
   if (alive){
    sp->top++;
    sp->arr[sp->top]=curr;
   }
   }
*returnSize = sp->top + 1;
return sp->arr;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna