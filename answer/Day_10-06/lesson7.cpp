int lession7(int n, int a[]){
    int result = 0;
    int min = abs(a[0]-a[1]);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
           if(abs(a[i]-a[j]) < min){
               min = abs(a[i]-a[j]);
               result = min;
           }
        }
    }
    return result;
}
