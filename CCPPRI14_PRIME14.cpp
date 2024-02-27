#include<bits/stdc++.h>
using namespace std;
bool ngto(long long a){
	for (int i = 2; i <= sqrt(a); i++){
		if ( a % i == 0 ) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		vector <int> v;
		for (int i = 2; i <= sqrt(a); i++){
			if (ngto(i)) v.push_back (i);
		}
		for (int i = 2; i <= sqrt(a); i++){
			cout << pow(v[i],2) << " ";
		}
		
		cout << endl;
	}
	return 0;
} 
