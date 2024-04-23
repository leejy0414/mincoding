#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int main() {
	int a,b;
	int cnt = 0;
	cin >> a >> b;
	while (b > a) {
		if (b % 10 == 1) {
			b /= 10;
			cnt++;
		}
		else {
			b /= 2;
			cnt++;
		}
	}
	if (a == b)cout << cnt;
	else cout << "-1";

	return 0;
}