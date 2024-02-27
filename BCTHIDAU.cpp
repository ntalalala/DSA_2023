#include<bits/stdc++.h>
using namespace std;
typedef struct {
	string ten;
	int p1sub; int p1time;
	int p2sub; int p2time;
	int p3sub; int p3time;
	int p4sub; int p4time;
	int bai; int phat;
} acm;
bool cmp(acm p1, acm p2){
	if (p1.bai == p2.bai) return p1.phat < p2.phat;
	return p1.bai > p2.bai;
}
int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	vector <acm> v;
	for (int i = 0; i < n; i++){
		string s;
		int p1s, p1t, p2s, p2t, p3s, p3t, p4s, p4t;
		cin >> s >> p1s >> p1t >> p2s >> p2t >> p3s >> p3t >> p4s >> p4t;
		int bai = 0, phat = 0;
		if (p1t > 0) {
			bai++;
			phat += (p1s - 1)*20 + p1t;
		}
		if (p2t > 0) {
			bai++;
			phat += (p2s - 1)*20 + p2t;
		}
		if (p3t > 0) {
			bai++;
			phat += (p3s - 1)*20 + p3t;
		}
		if (p4t > 0) {
			bai++;
			phat += (p4s - 1)*20 + p4t;
		}
		v.push_back({s, p1s, p1t, p2s, p2t, p3s, p3t, p4s, p4t, bai, phat});
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].ten << " " << v[0].bai << " " << v[0].phat;
	return 0;
	
}
