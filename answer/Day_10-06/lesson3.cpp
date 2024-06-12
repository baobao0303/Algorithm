int lession3(int n, int a[]){
    int min = a[0];
    int minCount = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }else if (a[i] == min) {
            minCount++;
        }
    }
    return minCount;
}