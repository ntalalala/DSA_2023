#include<bits/stdc++.h>
using namespace std;
long long a[18];
void fibo(){
	long long f1 = 1, f2 = 1;
	a[0] = 0; a[1] = 1; a[2] = 1;
	for (int i = 3; i <= 16; i++){
		a[i] = f1 + f2;
		f1 = f2;
		f2 = a[i];
	}
}
bool checkfib(long long k){
	for (int i = 0; i <= 16; i++){
		if (k == a[i]) return true;
	}
	return false;
}
int main(){
	fibo();
	int t;
	cin >> t;
	while (t--){
		int s;
		cin >> s;
		int b[s];
		vector <int> v;
		for (int i = 0; i < s; i++){
			cin >> b[i];
			if (checkfib(b[i])) v.push_back(b[i]);
		}
		for (int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
