#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;


int N;
priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
vector<long long int>v;



int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	cin >> N;
	pq.push(1);
	//v.push_back(1);
	int idx = -1;
	while (v.size() < 1500) {
		if (idx >= 0) {
			if (pq.top() == v[idx]) {
				while (pq.top() == v[idx]) {
					pq.pop();
				}
			}
		}
		long long int now = pq.top();
		pq.push(now * 2);
		pq.push(now * 3);
		pq.push(now * 5);
		
		v.push_back(now);
		idx++;
		pq.pop();
	}
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		cout << v[t - 1] << " ";
	}

	
}