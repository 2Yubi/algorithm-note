#include<bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

// 1. 再帰で実装
void print(vector<int> b){
    for(int i : b){
        cout << i << " ";
        cout << "\n";
    }
}

void combi(int start, vector<int> b){
    if(b.size() == k){
        print(b);
        return;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}


// 2. forで実装



// int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
// void combi(int start, vector<int> b){
//     if(b.size() == k){
//         for(int i : b) cout << i << " ";
//         cout << "\n"; 
//         return;
//     }
//     for(int i = start + 1; i < n; i++){
//         // 1 : 0 (1, 2, 3, 4)
//         // combi(0, b{0})
//         // 2 : 1 (2, 3, 4)
//         // combi(1, b{0, 1})
//         // 3 : 2 (3, 4)
//         // combi(2, b{0, 1, 2}) -> print 0, 1, 2
//         // 4 : 3 (4)
//         b.push_back(i);
//         combi(i, b);
//         b.pop_back();
//     }
//     return;
// }
// int main(){
//     vector<int> b;
//     combi(-1, b);
//     return 0;
// }


// void print(vector<int> b){
//     for(int i : b) cout << i << " ";
//     cout << "\n";
// }
// void combi(int start, vector<int> b){
//     if(b.size() == k){
//         print(b);
//         return;
//     }
//     for(int i = start + 1; i < n; i++){
//         b.push_back(i);
//         // 0, 1, 2, 3, 4
//         combi(i, b);
//         b.pop_back();
//     }
//     return;
// }
// int main(){
//     vector<int> b;
//     combi(-1, b);
//     return 0;
// }


// 2. forで実装
// int n = 5;
// int k = 3;
// int a[5] = {1, 2, 3, 4, 5};
// int main(){
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             for(int k = j + 1; k < n; k++){
//                 cout << i << " " << j << " " << k << "\n"; 
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             for(int k = j + 1; k < n; k++){
//                 cout << i << " " << j << " " << k << "\n";
//             }
//         }
//     }
//     return 0;
// }


// int n = 5;
// int k = 3;
// int a[5] = {1, 2, 3, 4, 5};
// int main(){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             for(int k = 0; k < j; k++){
//                 cout << i << " " << j << " " << k << '\n';
//             }
//         }
//     }
//     return 0;
// }