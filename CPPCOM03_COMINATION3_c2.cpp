#include<bits/stdc++.h>
using namespace std;
int n, x[100], used[100];
void inkq(){
	for(int i = 1; i <= n; i++){ 
		cout << x[i];
	}
	cout << " ";
}

void Try2( int i) {
	for (int j = 1; j <= n; j++){
		if (used[j] == 0){
			used[j] = 1; 
			x[i] = j;
			if (i == n) inkq();
			else Try2(i + 1);
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	x[0] = 0;
	while (t--){
		cin >> n;
		Try2(1);
		cout << endl;
	}
	return 0;
}

