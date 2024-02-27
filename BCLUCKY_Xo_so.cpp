#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, x;
	cin >> n >> x;
	vector < long long > v;
	map < long long, long long > m;
	while (n--){
		long long tmp;
		cin >> tmp;
		m[tmp] = 0;
		v.push_back(tmp);
	}
	for (int i = 0; i < v.size(); i++){
		m[v[i]] ++;
	}
	map < long long, long long > :: iterator it;
	for (it = m.begin(); it != m.end(); ++it ){
		
	}
	
}
