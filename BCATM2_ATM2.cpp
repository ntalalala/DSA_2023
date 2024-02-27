#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	unsigned long long s;
	cin >> n >> s;
	vector <long long> v;
	for (int i = 0; i < n; i++){
		unsigned long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater <long long> ());
	long long i = 0; long long sum2 = s;
	while (s > 0 && i < n){
		int dem = 0;
		for (int j = i; j < n; j++){
			long long k = s / v[j];
			dem += k;
			s = s - k*v[j];
		}
		if (s == 0) { cout << dem; break;}
		else {
			i++;
			s = sum2;
		}
	}
	return 0;
}

