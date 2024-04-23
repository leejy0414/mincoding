#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;


int N,M;
//int map[1002][1002];
bool fire[1002][1002];
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
priority_queue<int, vector<int>, less<int>>least;
priority_queue<int,vector<int>,greater<int>>large;
int middle;



int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	cin >> N;
	middle = 500;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		if (a > middle) large.push(a);
		else least.push(a);
		if (b > middle) large.push(b);
		else least.push(b);
		if (least.size() == large.size())cout << middle << "\n";
		else {
			while (least.size() != large.size()) {
				if (least.size() > large.size()) {
					large.push(middle);
					middle = least.top();
					least.pop();
				}
				else {
					least.push(middle);
					middle = large.top();
					large.pop();
				}
			}cout << middle << "\n";
		}
		
	}

	
}