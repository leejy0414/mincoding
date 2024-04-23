#include <iostream>
#include<cstring>
using namespace std;
char a, b, c;

int n,type,num;
int dat[10000];
char member[10000][100];
char name[100];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> type;
		if (type == 1) {
			cin >>num >>name;
			if (dat[num] == 0) {
				dat[num] = 1;
				strcpy(member[num], name);
				cout << num << " " << "OK\n";
			}
			else { cout << num << " " << "ERROR\n"; }
		}
		if (type == 2) {
			cin >> num;
			if (dat[num] == 1) {
				dat[num] = 2;
				cout << num << " ";
				for (int j = 0; j < 100; j++) {
					if (member[num][j] == '\0') { break; }
					cout << member[num][j];
				} cout<< " " << "ENTER\n";
			}
			else if (dat[num] == 2) {
				dat[num] = 1;
				cout << num << " ";
				for (int j = 0; j < 100; j++) {
					if (member[num][j] == '\0') { break; }
					cout << member[num][j];
				} cout << " " << "EXIT\n";
			}
			else { cout << num << " " << "ERROR\n"; }
		}
		
	}
	return 0;
}