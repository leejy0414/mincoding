#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int arr[10001];
int W, N;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		memset(arr, 0, sizeof(arr));
		cin >> N >> W;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		int maxi = 0;
		int ans = 0;
		int index = 0;
		for (int i = 0; i < W; i++) {
			maxi += arr[i];
			ans += arr[i];
		}
		for (int i = 0; i < N - W; i++) {
			
			ans -= arr[i];
			ans += arr[i + W];
			if (ans > maxi) {
				maxi = ans;
				index = i + 1;
			}
		}


		cout << "#" << tc << " " << index << " " << index + W -1<< " " << maxi << "\n";

	}
	return 0;
}