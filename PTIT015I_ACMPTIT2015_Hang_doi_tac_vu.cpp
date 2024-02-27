#include<bits/stdc++.h>
using namespace std;
int main(){
	int times;
	cin >> times;
	while (times--){
		int n,t;
		cin >> n >> t;
		vector < int > v;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		int i = 0, sum = 0;
		while (sum < t ){
			sum += v[i];
			i++;
		}
		cout << i - 1 << endl;
	}
	return 0;
}
