#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
struct Node {
	int num;
	int y, x;
	bool operator<(Node right) const {
		if (num > right.num)return true;
		if (num > right.num)return false;
		return false;
	}
};
int N,M;
//int map[1002][1002];
bool fire[1002][1002];
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
priority_queue<Node>bomb;


int main() {
	cin >> N >> M;
	for (int i = 0; i < N + M; i++) {
		int k;
		cin >> k;
		if (k != 0) {
			int y, x;
			cin >> y >> x;
			if (fire[y][x] == false) {
				bomb.push({ k,y,x });
			}
		}
		else {
			if (bomb.size() == 0)cout << "-1\n";
			else {
				//cout << bomb.top().num << endl;
				while(bomb.size() != 0){
					int xx = bomb.top().x;
					int yy = bomb.top().y;
					if (fire[yy][xx] == true) {
						bomb.pop();
						continue;
					}
					fire[yy][xx] = true;
					for (int i = 0; i < 4; i++) {
						int ny = yy + dy[i];
						int nx = xx + dx[i];
						if (ny >= 1002 || ny < 0 || nx >= 1002 || nx < 0)continue;
						fire[ny][nx] = true;
					}
					cout << bomb.top().num << '\n';
					bomb.pop();
					
					break;
				}
				//if (bomb.size() == 0)cout << "-1\n";
			}
			
		}
	}
}