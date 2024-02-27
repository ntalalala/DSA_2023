#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	vector <char> v;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '(' || s[i] == '[') v.push_back(s[i]);
        else if (s[i] == ')' || s[i] == ']'){
        	if (v.size() == 0) return false;
        	else {
        		if (s[i] == ')' && v[v.size() - 1] == '(') v.pop_back();
        		else if (s[i] == ']' && v[v.size() - 1] == '[') v.pop_back();
        		else return false;
			}
		}
    }
    if (v.size() != 0) return false;
    return true;
}
int main(){
	string s;
	while(getline(cin, s) && s != "."){
		if (check(s)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
