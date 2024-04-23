#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

string str;
int N;

int main() {
    cin >> N;
    cin >> str;
    int cntS = 0;
    int cntK = 0;
    int index = 0;
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] == 'k')cntK++;
        else cntS++;
    }
    if (cntK == str.length() / 4) {
        cout << 1 << "\n" << str.length() / 2;
        return 0;
    }
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] == 'k')cntK--;
        else cntS--;

        if (str[i + str.length() / 2] == 'k')cntK++;
        else cntS++;

        if (cntK == str.length() / 4) {
            index = i;
            break;
        }
    }
    cout << 2 << "\n" << index+1 << " " << index + str.length() / 2+1;

    return 0;
}