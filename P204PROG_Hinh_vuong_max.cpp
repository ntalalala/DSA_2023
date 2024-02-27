#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int t1;
		cin >> t1;
		vector <int> v;
		for (int i = 0; i < t1; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		int max = 0;
		sort (v.begin(), v.end(), greater <int> ());
		for (int i = 0; i < t1; i++){
			int min = i + 1 > v[i] ? v[i] : i + 1;
			max = max < min ? min : max; 
		}
		cout << max << endl;
	}
	return 0;
}

