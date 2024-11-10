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

### リカーシブ関数でpermutaion実装
2309_2.cpp

<br>

# combination

順序など関係なく、何人か、いくつかを選ぶ時に使用

<br>
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

<br>
<br>

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

<br>
<br>

# queue とは
queueは(FIFO, First In First Out)<br>
先に入れたものが、先に出るデータ構造

### 機能
1. push(value) : valueをキューに追加
2. pop()       : 一番前の要素を削除
3. size()      : キューのサイズ
4. front()     : 一番前の要素を参照


```
#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
	for(int i = 1; i <= 10; i++)q.push(i);
		while(q.size()){
		cout << q.front() << ' ';
		q.pop();
	}
	return 0;
}
/*
1 2 3 4 5 6 7 8 9 10
*/
```

<br>
<br>

# deque とは
前後に挿入、削除、参照が可能なデータ構造

### 機能
1. push_front(value) : キューの前にvalueを追加
2. push_back(value)  : キューの後ろにvalueを追加
3. pop_front()       : 一番前の要素を削除
4. pop_back()        : 一番後ろの要素を削除
5. size()            : キューのサイズ





