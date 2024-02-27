#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int t1;
		cin >> t1;
		vector <long long> v;
		for (int i = 0; i < t1; i++){
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		long long max = 0;
		for (int i = 0; i < t1; i++){
			int count1 = 0, count2 = 0;
			for (int j = i - 1; j >= 0; j--){
				if (v[i] > v[j]) break;
				count1++;
			}
			for (int z = i + 1; z < t1; z++){
				if (v[i] > v[z]) break;
				count2++;
			}
			long long dientich = (count1 + count2 + 1) * v[i];
			max = max < dientich ? dientich : max;
		}
		cout << max << endl;
	}
	return 0;
}

