#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int arr[100001];
int N;

int main() {
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		
	}
	int maxi = -213456789;
	int startindex = 0;
	int endindex = 0;
	int answer = 0;
	int startindexck = 0;
	for (int i = 0; i < N; i++) {
		answer += arr[i];
		
		if (answer <= 0) {
			for (int j = i + 1; j < N; j++) {
				if (j == N - 1 && arr[j] < 0)continue;
				if (arr[j] < 0)continue;
				//cout << arr[j] << " ";
				answer = arr[j];
				startindexck = j;
				i = j;
				break;
			}
		}
		if (answer > maxi) {
			maxi = answer;
			endindex = i;
			if (endindex >= startindexck) {
				startindex = startindexck;
			}
		}
	}


	
	cout << maxi << "\n" << startindex << " " << endindex;
	return 0;
}