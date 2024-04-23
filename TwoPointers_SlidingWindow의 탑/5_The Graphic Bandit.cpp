#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int arr[100001];
int N,M,P;

int main() {
	cin >> N >> M >> P;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	if (N == M) {
		cout << "1";
		return 0;
	}
	int answer = 0;

	for (int i = 0; i < M; i++) {
		answer += arr[i];
	}
	if (answer < P)cnt++;
	for (int j = 0; j < N-1 ; j++) {

		answer -= arr[j];
		int a = j + M;
		if (a >= N)a=a - N;
		answer += arr[a];
		//cout << answer << " ";
		if (answer < P)cnt++;

	}
	cout << cnt;
	return 0;
}