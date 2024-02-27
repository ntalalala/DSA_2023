#include<bits/stdc++.h>
using namespace std;
string toigian (string s){
	int dem = 0;
	for (int i = 0; i < s.length(); i++){
		dem += s[i] - '0';
	}
	stringstream ss;
	ss << dem;
	string str = ss.str(); 
	if (str.length() > 1) return toigian(str);
	else return str;
	}
	
int main(){
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		cout << toigian(s) << endl;
	}
}
