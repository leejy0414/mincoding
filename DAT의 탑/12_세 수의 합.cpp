#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;

int DAT[100001];
vector<int>arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
		DAT[a] = 1;
	}
	sort(arr.begin(), arr.end());
	int answer;
	int cnt = 0;
	for (int i = 0; i < N-2; i++) {
		
		int leftidx = i + 1;
		int rightidx = N - 1;

		while (leftidx< rightidx) {
			answer =arr[i]+ arr[leftidx] + arr[rightidx];
			if (answer > K)rightidx -= 1;
			else if (answer < K)leftidx += 1;
			else {
				
				cnt++;
				leftidx += 1;
				rightidx -= 1;
			}

		}
		
	}
	cout << cnt;
}