#include<bits/stdc++.h>
using namespace std;

int main(){
	int x1, x2;
	cin >> x1 >> x2;
	int a[x1], b[x2];
	for (int i = 0; i < x1; i++){
		cin >> a[i];
	}
	for (int i = 0; i < x2; i++){
		cin >> b[i];
	}
	sort(a, a + x1);
	for (int i = 0; i < x2; i++){
		int left = 0, right = x1 - 1, pos = -1;
		while (left <= right){
			int mid = (left + right) / 2;
			if (a[mid] <= b[i]) {
				pos = mid;
				left = mid + 1;
			}
			else right = mid - 1;
		}
		cout << pos + 1 << endl;
	}
	return 0;
}
