#include<bits/stdc++.h>
using namespace std;
int count(vector <int> v){
	int k = v.size();
	int times = 0;
	int count = k;
	while ( 1 > 0){
		vector <int> v2(k);
		for (int i = 0; i < k - 1; i++){
			if (v[i] != v[i+1]) {
				count--;
				break;
		}
	}
	if (count == k || times > 1000) break;
		for (int i = 0; i < k; i++){
			v2[i] = abs(v[i] - v[(i+1) % k]);
	}
	times++;
	v.assign(v2.begin(),v2.end());
	}
	return times;
}
int main(){
	int m = 1;
	while (1 > 0){
		int k;
		cin >> k;
		if (k == 0) break;
		vector < int > v;
		for (int i = 0; i < k; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		int n = count(v);
		if ( n > 1000){
			cout << "Case " << m << ": " << "not attained" << endl;
			m++;
		}
		else {
			cout << "Case " << m << ": " <<  n << " iterations" << endl;
			m++;
		}
	}
	return 0;
}
