#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, count = 0;
	cin >> a >> b;
	vector <int> v;
	for (int i = 0; i < a; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 0; i < a - 1; i++){
		for (int j = i + 1; j < a; j++ ){
			if (v[i] + v[j] == b) count ++;
		}
	}
	cout << count;
	return 0;
}
