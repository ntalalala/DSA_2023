#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull a, b;
	cin >> a >> b;
	vector <ull> v;
	ull tong;
	for (int i = 0; i < a; i++){
		ull tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int count = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < a - 1; i++){
		tong = 0;
		for (int j = i; j < a; j++){
			tong += j;
			if (tong == b) {
				count = 1;
				break;
				break;
			}
			else if (tong > b){
				break;
			}
		}
		
	}
	if (count == 1) cout << "YES";
	else cout << "NO";
	return 0;
}
