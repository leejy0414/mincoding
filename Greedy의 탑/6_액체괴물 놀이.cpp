#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int>v;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int answer = 0;
	while(v.size() > 1) {
		sort(v.rbegin(), v.rend());
		int ans = v[v.size() - 1] + v[v.size() - 2];
		v.pop_back();
		v.pop_back();
		v.push_back(ans);
		answer += ans;
		
	}
	cout << answer;

	return 0;
}