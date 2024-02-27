#include<bits/stdc++.h>
using namespace std;
int main(){
	stack <int> st;
	while (true){
		string s;
		cin >> s;
		if (s == "end") break;
		else if (s == "init") st = stack<int> ();
		else if (s == "push") {
			int x;
			cin >> x;
			st.push(x);
		}
		else if (s == "pop"){
			if (!st.empty()) st.pop();
		} 
		else if (s == "top"){
			if (st.empty()) cout << "-1" << endl;
			else cout << st.top() << endl;
		}
		else if (s == "size") cout << st.size() << endl;
		else if (s == "empty"){
			cout << st.empty() << endl;
		}
	}
	return 0;
}
