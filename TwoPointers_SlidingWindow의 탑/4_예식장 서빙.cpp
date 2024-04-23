#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int arr[1000001];
int N,R;
int dat[201];
int flag;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		memset(arr, 0, sizeof(arr));
		
		flag = 0;
		cin >> N>> R;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < N; i++) {
			memset(dat, 0, sizeof(dat));
			if (flag == 1)break;
			dat[arr[i]]++;
			for (int j = 1; j <= R; j++) {
				int a = i - j;
				if (a < 0)a += N;
				int b = i + j;
				if (b >= N)b -= N;
				
				dat[arr[a]]++;
				dat[arr[b]]++;
				if (dat[arr[a]] >= 3 || dat[arr[b]] >= 3) {
					//cout << arr[a] << " "<<arr[i]<<" ";
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)cout << "#" << tc << " NO\n";
		else cout << "#" << tc << " YES\n";
	}
	return 0;
}