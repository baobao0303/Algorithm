#include<bits/stdc++.h>
using namespace std;

using ll = long long;

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
// Main function
int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    // INPUT
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // ALGORITHM
    auto result = lession1(n, a);
    int numberOld = get<0>(result);
    int numberEven = get<1>(result);
    int sumOld = get<2>(result);
    int sumEven = get<3>(result);

    // OUTPUT
    // Range based loop
    cout << endl;
    cout << numberOld << endl;
    cout << numberEven << endl;
    cout << sumOld << endl;
    cout << sumEven << endl;


    return 0;
}