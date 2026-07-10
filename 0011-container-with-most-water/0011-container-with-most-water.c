int maxArea(int* height, int heightSize) {
    int lft=0;
    int rght=heightSize-1;
    int max=0;
    int area;
    while(lft!=rght){
        int l,b;
        if (height[lft]>=height[rght]){
            int b=height[rght];
            int l=rght-lft;
             area=l*b;
            if (max<area){
                max=area;
            }
            else{
                rght--;
            }
        }else  if (height[lft]<=height[rght]){
            int l=rght-lft;
            int b=height[lft];
             area=l*b;
            if (max<area){
                max=area;
            }
            else{
                lft++;
            }
        }
        
}
return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna