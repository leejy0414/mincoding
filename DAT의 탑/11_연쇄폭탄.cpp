#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;
struct Node {
	int ck;
	int y, x;
};
Node DAT[10000];
int mat[100][100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int a;
			cin >> a;
			DAT[a] = { 1,i,j };
			mat[i][j] = a;
			
		}
	}
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	int flag = 1;
	int y, x;
	int k = 1;
	while (flag != 0) {
		flag = 0;
		y = DAT[k].y;
		x = DAT[k].x;
		DAT[k].ck = 0;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= N || nx < 0 || nx >= N)continue;
			if(DAT[mat[ny][nx]].ck == 0)continue;
			DAT[mat[ny][nx]].ck = 0;
		}

		for (int i = 1; i <= N * N; i++) {
			if (DAT[i].ck == 1) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)break;
		while (1) {
			if (k == N * N)break;
			if (DAT[++k].ck == 1) {
				
				break;
			}
			
		}
		
		int a = -1;
	}
	cout << k<<"초";
	
}