#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include<cstring>
using namespace std;

int N;
struct ranking {
	int coding;
	int interview;
	bool operator<(ranking a) const {
		if (coding > a.coding) return false;
		if (coding < a.coding) return true;
		return false;

	}
};
vector<ranking>v;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		//cout << v[i].coding << " ";
		int flag = 0;
		for (int j = 0; j < i; j++) {
			
			if (v[i].interview > v[j].interview) {
				flag = 1;
				break;
			}
			
		}
		if (flag == 0)cnt++;
	}
	cout << cnt;
	return 0;
}