#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include<cstring>
using namespace std;

int N;
struct meeting{
	int start;
	int end;
	bool operator<(meeting a) const {
		if (end > a.end) return false;
		if (end < a.end) return true;
		return false;

	}
};
vector<meeting>v;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());
	//for (int i = 0; i < N; i++) {
	//	cout << v[i].end << " ";
	//}
	int cnt = 0;

	while (!v.empty()) {
		cnt++;
		int endtime = v[0].end;
		v.erase(v.begin());
		
		for (int i = 0; i < v.size(); i++) {
			if (v[i].start< endtime) {
				v.erase(v.begin() + i);
				i--;
			}
		}
	}
	
	cout << cnt;
	return 0;
}