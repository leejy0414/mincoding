#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> p[1000000];

int main() {
	
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int flag = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> p[j].second; // arr
		}
		for (int j = 0; j < N; j++) {
			cin >> p[j].first; // num
		}

		sort(p, p + N);
		//for (int j = 0; j < N; j++) {
		//	cout << p[j].first << " "; 
		//	cout << p[j].second << " ";// num
		//}
		
		for (int j = 0; j < N-1; j++) {
			if (p[j].second< p[j+1].second) {
				flag = 1;
			}
		}
		if (flag == 1)printf("NO\n");
		else printf("YES\n");

	}

	return 0;
}