#include <iostream>
#include <cstring>
using namespace std;

int arr[1000000] = { 0 };
int DAT[10000001] = { 0 };


int main() {
    int H, W;
    int index;
    cin >> H >> W;
    int total = H * W;
    for (int i = 0; i <total; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < total; i++) {
        DAT[arr[i]]+=1;
    }
    int max = DAT[0];
    for (int i = 1; i < 10000001; i++) {
        if (DAT[i] > max) {
            max = DAT[i];
            index = i;
        }
    }
    cout << index;
    return 0;
}