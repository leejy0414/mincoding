#include <iostream>
using namespace std;

int main() {
	int arr[3][5] = {
	{1, 3, 3, 5, 1},
	{3, 6, 2, 4, 2},
	{1, 9, 2, 6, 5}
	};
	int a;
	cin >> a;
	int DAT[10] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			DAT[arr[i][j]] += 1;
		}
	}
	for (int i = 1; i <10; i++) {
		if (DAT[i]==a) {
			cout << i << " ";
		}
	}
	
	return 0;
}