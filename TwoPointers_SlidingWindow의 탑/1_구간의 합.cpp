#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int arr[10001];
int main() {
	int n, m;
	cin >> n >> m;

	int result = 0;
	int cnt = 0;
	int index = 0 ;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		result += arr[i];

		if (result > m) {
			result -= arr[index];
			index = index + 1;
			result -= arr[i];
			i--;
		}
		if (result == m) {
			cnt++;
			result -= arr[index];
			index = index + 1;
			result -= arr[i];
			i--;
		}
	}

	cout << cnt;
	return 0;
}