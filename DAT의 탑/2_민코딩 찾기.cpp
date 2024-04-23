#include <iostream>
using namespace std;

int main() {
	string vect = "MINCODIG";
	int n;
	char arr[10];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int DAT[27] = { 0 };
	for (int i = 0; i < vect.length(); i++) {
		DAT[vect[i] - 'A'+1] = 1;
	}
	
	for (int i = 0; i < n; i++) {
		
		if (DAT[arr[i] - 'A'+1] == 1) { cout << 'O'; }
		else { cout << "X"; }
	}
	return 0;
}