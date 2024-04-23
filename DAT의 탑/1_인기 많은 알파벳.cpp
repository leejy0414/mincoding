#include <iostream>
using namespace std;

int main() {
	char arr[9];
	
	cin >> arr;
	int DAT[27] = {0};
	for (int i = 0; i < 8; i++) {
		
		DAT[(arr[i]-'A'+1)] +=1;
		
	}
	int maxi=0;
	int index;
	
	for (int i = 1; i <27; i++) {
		if ((DAT[i]) >maxi) {
			maxi = DAT[i];
			index = i;
		}
	}
	char k = index + 64;
	cout << k;
	return 0;
}