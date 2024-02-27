#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		if ( s == "dung") cout << "2" << endl;
		else if ( s == "lon hon") cout << "1" << endl;
		else cout << "3" << endl;
	}
	return 0;
}
