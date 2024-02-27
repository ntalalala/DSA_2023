#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		vector <long long> v;
		for (int i = 0; i < a; i++){
			long long tmp;
			cin >> tmp;
			v.push_back (tmp);
		}
		int dem = 0;
		for (int i = 0; i < v.size(); i++){
			if (v[i] == 0) {
				v.erase(v.begin() + i);
				dem ++;
				i--;
			}
		}
		for (int i = 0; i < dem; i++){
			v.push_back(0);
		}
		for (int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
