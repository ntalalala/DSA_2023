#include<bits/stdc++.h>
using namespace std;
int main(){
	vector < int > v = {500,200,100,50,20,10,5,2,1};
	int n;
	cin >> n;
	while (n--){
		int a;
		cin >> a;
		int k = 0;
		for (int i = 0; i < v.size(); i++){
			k += a/v[i];
			a = a % v[i];
		}
		cout << k << endl;
	}
	return 0;
}
