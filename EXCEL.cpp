#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		string s;
		cin >> s;
		if (s == "R0C0") break;
		int a = s.find('C');
		string s1 = s.substr(1, a - 1);
		string s2 = s.substr(a + 1, s.length() - a);
		stringstream str(s2);
		int x = 0;
		str >> x;
		string s3 = "";
		x = x - 1;
		int i=0;
//		if (x == 0) s3 += (char)(x + 65);
		while (x >= 0){
			int du = x % 26;
			x = x / 26;
			s3 = (char)(du + 65) + s3;
			x-=1;
		}
		cout << s3 << s1 << endl;
	}
	return 0;
}
