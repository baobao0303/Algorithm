tuple<int, int, int, int> lession1(int n, int a[]){
    int numberOld = 0, numberEven = 0, sumEven =0 , sumOld =0, sum =0;
    for(int i = 0; i < n ; i++){
        if( abs(a[i]) %2==1){
            numberOld++;
            sumOld += a[i];
        }
        sum =  sum + a[i];
    }
    numberEven = n - numberOld;
    sumEven = sum - sumOld;

    return {numberOld, numberEven, sumOld, sumEven};
}
    // int numberOld = get<0>(result);
    // int numberEven = get<1>(result);
    // int sumOld = get<2>(result);
    // int sumEven = get<3>(result);