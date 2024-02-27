#include<bits/stdc++.h>
using namespace std;
float giatri(int a, int b, int c, int d){
	return fabs((a * 1.0) / (c * 1.0) - (b * 1.0) / d);
}
int main(){
	float a[4];
	for (int i = 0; i < 4; i++) cin >> a[i];
	vector <float> v;
	v.push_back(giatri(a[0], a[1] , a[2], a[3]));
	v.push_back(giatri(a[2], a[0] , a[3], a[1]));
	v.push_back(giatri(a[3], a[2] , a[1], a[0]));
	v.push_back(giatri(a[1], a[3] , a[0], a[2]));
	float max = v[0];
	for (int i = 1; i < 4; i++){
		if (max < v[i]) max = v[i];
	}
	for (int i = 0; i < 4; i++){
		if (v[i] == max) {
			cout << i ;
			break;
		}
	}
	return 0;
}
