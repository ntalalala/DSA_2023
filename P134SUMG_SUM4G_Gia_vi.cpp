#include<bits/stdc++.h>
using namespace std;
int n, x[20];
vector <pair <int, int>> v;
int min1 = 1e9;
void minkq(){
	int docay = 0, dochua = 1;
	bool flag = 0;
	for (int i = 1; i <= n; i++){
		if (x[i] == 1){ 
			flag = 1;
			dochua *= v[i-1].first;
			docay += v[i-1].second;
		}
	}
	if (flag){
		int h = abs(dochua - docay);
		min1 = min1 > h ? h : min1;
	}
}
void Try(int i){
	for (int j = 0; j <= 1; j++){
		x[i] = j;
		if (i == n) minkq();
		else Try(i + 1);
	}
}
int main(){
	cin >> n;
	int tmp1, tmp2;
	for (int i = 1; i <= n; i++){
		cin >> tmp1 >> tmp2;
		v.push_back({tmp1, tmp2});
	}
	Try(1);
	cout << min1;
}
