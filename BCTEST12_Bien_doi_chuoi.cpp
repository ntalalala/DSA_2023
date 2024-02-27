#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for (int i = 0; i < s.length(); i++){
		if (s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]== 'e'||s[i] =='u'||s[i]=='i') {
			s.erase(i,1);
			i--;
		}
		else if ('A' <= s[i] && s[i] <= 'Z') cout << "." << (char)(s[i] + 32);
		else cout << "." << s[i];
	}
	return 0;
}
