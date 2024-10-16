# algorithm-note
2024<br>
Algorithm Study Note

<br>

# permutaion

順序が決まっている任意の集合を異なる順序に混ぜる演算

### 特徴
n個の集合でn個を選ぶpermutaionの数はn!<br>
実装方法は以下の２つある<br>
- next_permutaion : 昇順<br>
- prev_permutaion : 降順
<br><br>

next_permutaionを実装するには配列を"昇順に整列してからする"


<br>

# map とは

map は key を基盤で(key - value)で行っている整列なコンテイナー。
挿入、削除、修正、探索の時間計算は O(logN)

### 特徴

1. 自動で昇順で整列されるため、挿入した順番ではなくアスキーコード順番で整列された
   順で探索する
2. 該当 key で直接参照できる
3. key に参照しただけで要素が出来てる

- if(mp[1]){...} mp[1]がない場合、このロジックで mp[1]=0 になる：元々 0 が割り当ていたか参照して割り当てられたか分からない

* if(mp.find(1) == mp.end()){...}このロジックだと参照なしで map の値の有無を確認できる


# set とは

set は固有の要素のみを格納するコンテナ

### 特徴

1. {key, value}だけではなく int 形とか pair でも格納できる
2. 重複した値は除去される
3. map と同じく自動で整列される

```
#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> int_st;

	int_st.insert(5);
	int_st.insert(5);
	int_st.insert(5);
	int_st.insert(5);
	int_st.insert(1);
	int_st.insert(2);

	for(auto i : int_st) cout << i << " ";

	return 0;
}

// 結果
// 1 2 5

```
