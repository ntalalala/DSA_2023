#include<bits/stdc++.h>
using namespace std;
string chuyenso(unsigned long long s){
	string a = "";
	vector < char> v;
	while (s > 0){
		v.push_back( s % 10);
		s = s / 10;
	}
	for (int i = v.size() - 1; i >= 0; i--){
		a += v[i] + '0';
	}
	return a;
}

int main(){
	string s;
	cin >> s;
	int count = 0;
	while (s.length() > 1){
		unsigned long long sum = 0;
		for (int i = 0; i < s.length(); i++){
			sum += s[i] - '0';
		}
		count ++;
		s = chuyenso(sum);
	}
	cout << count;
	return 0;
}
