#include<bits/stdc++.h>
using namespace std;

int main(){
		vector <long long> v;
		for (int i = 0; i < 3; i++) {
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		cout << v[2] - v[0] << endl;
	return 0;
}
