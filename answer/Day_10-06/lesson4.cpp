int lession4(int n, int a[], int val){
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < val){
            temp++;
        }
    }
    return temp;
}
// double val; cin >> val;
//     // ALGORITHM
//     int result = lession4(n, a, val);