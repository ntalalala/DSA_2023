#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		vector <int> v;
		for (int i = 1; i <= a; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		int tong = v[0];
		for (int i = 1; i < v.size(); i++){
				if (tong != v[i]){
					tong += v[i];
					v.erase(v.begin() + i);
					i --;
				}
		}
		cout << v.size() << endl;
	}
	return 0;
}
