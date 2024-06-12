int lession6(int n, int a[], int val){
    int result = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == val){
                result++;
            }
        }
    }
    return result;
}