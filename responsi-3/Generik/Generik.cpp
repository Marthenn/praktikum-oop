#include <iostream>
using namespace std;

template <typename T1>
void func(T1 a, T1 b){
    cout << "Masukan Anda: " << a << " dan " << b << ", memiliki tipe yang sama\n";
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout << "Masukan Anda: " << a << " dan " << b << ", mungkin memiliki tipe yang berbeda\n";
}

template <>
void func(char a, int b){
    while(b--){
        cout << a << endl;
    }
}

// int main(){
//     func(1, 2);
//     func(1, 2.5);
//     func(1.5, 2.5);
//     func('a', 5);
//     return 0;
// }