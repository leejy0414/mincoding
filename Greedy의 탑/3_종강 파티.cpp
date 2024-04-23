#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
struct Mart {
	int set;
	int one;
};
int main() {
	int N, M;
	cin >> N >> M;
	int maxim;
	int money;
	int mini = 213456798;
	vector<Mart>v;
	int minis = 213456789;
	int minio = 213456789;
	for (int i = 0; i < M; i++) {
		int set, one;
		
		cin >> set >> one;
		v.push_back({ set,one });
	}
	for (int j = 0; j < v.size(); j++) {
		minis =min(minis, v[j].set);
		minio = min(minio, v[j].one);
	}
	for (int j = 1; j <= 6; j++) {
		if (minis < minio * j) {
			maxim = j;
			break;
		}
		maxim = 7;
	}
	if (maxim != 7) {
		int a;
		int n = N;
		a = n / 6;
		money = a * minis;
		n -= 6 * a;
		if (n >= maxim)money += minis;
		else money += minio * n;

	}
	else {
		int n = N;
		money = n * minio;
	}

	mini = min(mini, money);
	cout << mini;
}