#include<bits/stdc++.h>
using namespace std;
int a[10005];
void quicksort(int a[], int left, int right){
	int i = left, j = right, tmp;
	int pivot = a[(left + right)/2];
	while (i <= j){
		while (a[i] < pivot) i++;
		while (a[j] > pivot) j--;
		if (i <= j){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j) quicksort(a, left, j);
	if (i < right) quicksort(a, i, right);
}
int main(){
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	quicksort(a, 0, n - 1);
	int max = 0;
	for (int i = 0; i < n; i++) cout << a[i]; cout << endl;
	for (int i = 0; i < n - 2; i++){
		for (int j = i + 1; j < n - 1; j++){
			int h = m - a[i] - a[j];
			int left = j + 1, right = n - 1, pos = -1;
			while (left <= right){
				int mid = (left + right) / 2;
				if (a[mid] <= h){
					pos = mid;
					left = mid + 1;
				}
				else right = mid - 1;
			}
			if (pos != -1) max = max < a[pos] + a[i] + a[j] ? a[pos] + a[i] + a[j] : max;
		}
	}
	cout << max;
	
}
