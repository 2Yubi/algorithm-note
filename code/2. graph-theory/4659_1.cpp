#include<bits/stdc++.h>
using namespace std;
string pwd="";
int vowel_cnt, cons_cnt, cnt;
int flag;
string vowels = "aeiou";

bool check_vowel(string pwd){
	for(char c : pwd){
		if(vowels.find(c) != string::npos) return true;
	}
	return false;
}


int main(){
	while(true){
		cin >> pwd;
		if(pwd == "end") break;
		if(check_vowel(pwd)){
			for(int i = 1; i < pwd.size(); i++){
				if(vowels.find(pwd[i]) != string::npos && vowels.find(pwd[i-1]) != string::npos){
					vowel_cnt += 2; 
					cons_cnt = 0;
				}else if(vowels.find(pwd[i]) == string::npos && vowels.find(pwd[i-1]) == string::npos){
					cons_cnt += 2;
					vowel_cnt = 0;
				} 
				else{
					cons_cnt = 0;
					vowel_cnt = 0;
				}
				if(vowel_cnt >= 3 || cons_cnt >= 3){
					flag++; break;
				}
				
				if(pwd[i-1] == pwd[i]){
					if(pwd[i] == 'e' || pwd[i] == 'o') continue;
					else cnt += 2;
					if(cnt > 1) flag++; break;
				} else cnt = 0; flag = 0;
			}
			
	
			if(flag){
				cout << "is not acceptable.\n";
				vowel_cnt = 0;
				cons_cnt = 0;
				cnt = 0;
				flag = 0;
			} 
			else cout << "is acceptable.\n";
		}else cout << "is not acceptable.\n";	
	}
	
	return 0;
}