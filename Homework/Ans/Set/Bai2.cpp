
#include <iostream>
#include <vector>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    int count = 0;
    vector<int> result;
    for (int i =0 ; i< n ; i++) {
        int val; cin>>val;
        result.push_back(val);
    }
    
    cin>>n;
    for (int i =0 ; i< n ; i++) {
        int check; cin>>check;
        int index; cin>>index;
        if (check == 1) {
            int val; cin>>val;
            result.insert(result.begin() + index, val);
            count ++;
        } else if (check == 2){
            result.erase(result.begin() + index);
            count --;
        }
    }  
    if (count == 0) {
        cout << "Empty";
    } else {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
    }
    return 0;
}
// INPUT:
// 5
// 40 87 73 47 22
// 5
// 1 3 21
// 2 3
// 2 0
// 2 1
// 1 0 70


// OUTPUT: 70 87 47 22 