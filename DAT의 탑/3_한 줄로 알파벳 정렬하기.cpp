#include <iostream>
using namespace std;

int main() {
	char alphabet[5][3] = {
	{'A', 'B', 'C'},
	{'A', 'G', 'H'},
	{'H', 'I', 'J'},
	{'K', 'A', 'B'},
	{'A', 'B', 'C'}
	};
	
	int DAT[27] = {0};
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			DAT[(alphabet[i][j] - 'A' + 1)] += 1;
		}

	}
	
	
	for (int i = 1; i <27; i++) {
		if ((DAT[i]) >=1) {
			for (int j = 0; j < DAT[i]; j++) {
				char k = i + 64;
				cout << k;
			}
		}
	}
	
	return 0;
}