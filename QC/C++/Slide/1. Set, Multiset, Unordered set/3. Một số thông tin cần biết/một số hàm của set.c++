#include<bits/stdc++.h>
using namespace std;

int main(){
    // Hàm insert: thêm một phần tử và set.
    //Cú pháp set:
    set<int> se; // se là tên biến
    int a[7] = {1,1,2,1,3,4,5};
    // Cách insert mảng a vào set:
    for(int i = 0; i < 7; i++){
        se.insert(a[i]);
    }


    // Hàm size: trả về số lượng phần tử trong set.
    // Cách gọi hàm size cho set:
    count<< se.size()<<endl;


    // Hàm empty: Kiểm trả set rỗng, 
    // nếu rỗng trả về true, ngược lại trả về false.
    // Cách sử dụng empty:
    if(se.empty()){
        cout<<"Empty !\n"<<endl;
    }else{
        cout<<"Not Empty !\n"<<endl;
    }

    

    // Hàm clear: Xóa mọi phần tử trong set
    // Cách sử dụng:
    se.clear();
    //Check thử đã clear hay chưa?
    if(se.empty()){
        cout<<"Empty !\n"<<endl;
    }else{
        cout<<"Not Empty !\n"<<endl;
    }

}