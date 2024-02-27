#include<bits/stdc++.h>
using namespace std;
int ngto(long long a){
	if ( a % 2 == 0) return 2;
	if ( a % 3 == 0) return 3;
	for (int i = 5; i <= sqrt(a); i+=6){
		if ( a % i == 0 ) return i;
		if ( a % (i+2) == 0) return i+2;
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		vector <int> v;
		v.push_back(1);
		for (int i = 2; i <= a; i++){
			v.push_back (ngto(i));
		}
		for (int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 
