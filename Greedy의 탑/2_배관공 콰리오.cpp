#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	int money;
	cin >> money;
	int a, b, c, d;
	a = money / 500;
	money -= a * 500;
	b = money / 100;
	money -= b * 100;
	c = money / 50;
	money -= c * 50;
	d = money / 10;
	money -= d * 10;
	cout << a + b + c + d;

	
}