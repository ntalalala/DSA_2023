#include<bits/stdc++.h>
using namespace std;
void biendoi( string a){
	vector <long long> v;
	for (int i = 0; i < a.length(); i++){
		int dem = 1;
		while (a[i] == a[i+1]){
			dem++;
			a.erase(i+1,1);
		}
		cout << dem << a[i];
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		biendoi(s);
		cout << endl;
	}
	return 0;
}
