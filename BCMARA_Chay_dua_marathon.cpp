#include<bits/stdc++.h>
using namespace std;
typedef struct {
	int hour;
	int min;
	int sec;
} bo;
bool cmp(bo p1, bo p2){
	if (p1.hour == p2.hour ) {
		if (p1.min == p2.min) return p1.sec < p2.sec;
		else return p1.min < p2.min; 
	}
	else return (p1.hour < p2.hour );
}
int main(){
	int n;
	cin >> n;
	vector <bo> v;
	for (int i = 0; i < n; i++){
		bo b1;
		cin >> b1.hour >> b1.min >> b1.sec;
		v.push_back(b1);
	}
	sort(v.begin(),v.end(),cmp);
	for (int i = 0; i < v.size(); i++){
		cout << v[i].hour << " " << v[i].min << " " << v[i].sec << endl;
	}
	return 0;
}

	
	

