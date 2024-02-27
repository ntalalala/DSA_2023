#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int a = (s[0] - '0') * 10 + (s[1] - '0');
	string hour = s.substr(8,2);
	if (hour == "PM" && a != 12) a += 12;
	else if (hour == "AM" && a == 12) a = 0;
	string c = s.substr(2, 6);
	if (a < 10) cout << "0" << a << c;
	else cout << a << c;
}
