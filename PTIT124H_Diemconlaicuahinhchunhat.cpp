#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 3;
	vector < int > v1;
	vector < int > v2;
	while (t--){
		int a, b;
		cin >> a >> b;
		v1.push_back(a);
		v2.push_back(b);
	}
	if (v1[0] == v1[1]) cout << v1[2] << " "; 
	else if ( v1[0] == v1[2]) cout << v1[1] << " ";
	else cout << v1[0] << " ";
	if (v2[0] == v2[1]) cout << v2[2]; 
	else if ( v2[0] == v2[2]) cout << v2[1];
	else cout << v2[0];
	return 0;
	}
			
