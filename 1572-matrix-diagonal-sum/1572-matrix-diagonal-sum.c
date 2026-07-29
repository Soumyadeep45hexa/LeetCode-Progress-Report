int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;
    int osum=0;
    for (int i=0;i<matSize;i++){
        for (int j=0;j<*matColSize;j++){
            if (i==j){
             sum+=mat[i][j];}
            
        }
        osum+=mat[i][matSize-i-1];
        
    }
    int result=0;
    if (matSize%2!=0){
        result=sum+osum-mat[(matSize/2)][(matSize/2)];
    }else{
        result=sum+osum;
    }
    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna