#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	for (int i = s.length() - 3; i > 0; i -= 3 ){
		s.insert(i, ",");
	}
	cout << s;
	return 0;
}
