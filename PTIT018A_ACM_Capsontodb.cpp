#include<bits/stdc++.h>
using namespace std;
bool a[1000010]
void snt(){
	a[0] = 1; a[1] = 1;
	for (int i = 2; i <= sqrt(1000010); i++){
		long long tmp = i * i;
		while (tmp <= 1000010){
			a[tmp] = 1;
			tmp += i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		
	}
}
