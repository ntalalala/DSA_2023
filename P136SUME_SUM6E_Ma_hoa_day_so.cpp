#include<bits/stdc++.h>
using namespace std;
typedef struct {
	long long num;
	int times;
	int pos;
} number;
bool cmp(number a, number b){
	if (a.times == b.times) return a.pos < b.pos;
	return a.times > b.times;
}
int main(){
	int n; long long c;
	cin >> n >> c;
	vector <long long> v;
	vector <number> v1;
	for (int i = 0; i < n; i++){
		long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 0; i < v.size(); i++){
		int dem = 1;
		for (int j = i + 1; j < v.size(); j++){
			if (v[i] == v[j]){
				dem++;
				v.erase(v.begin() + j);
				j--;
			} 
		}
		v1.push_back({v[i], dem, i});
	}
	sort(v1.begin(), v1.end(), cmp);
	for (int i = 0; i < v1.size(); i++){
		for (int j = 0; j < v1[i].times; j++){
			cout << v1[i].num << " ";
		}
	}
	return 0;
	
}
