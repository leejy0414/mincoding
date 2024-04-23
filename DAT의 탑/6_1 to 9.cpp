#include <iostream>
#include <cstring>
using namespace std;




int main() {
    int type;
    cin >> type;
    if (type == 1) {
        int N;
        int cnt = 0;
        cin >> N;
        int arr[1000];
        int DAT[10] = { 0 };
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++) {
            DAT[arr[i]] += 1;
        }
        for (int i = 1; i < 10; i++) {
            printf("%d:%d개\n", i, DAT[i]);
        }
    }
    if (type == 2) {
        int N;
        int cnt = 0;
        cin >> N;
        int arr[1000];
        int DAT[10] = { 0 };
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++) {
            DAT[arr[i]] = 1;
        }
        for (int i = 0; i < 10; i++) {
            if (DAT[i] == 1)cnt++;
        }
        
        if (cnt == N) {
            cout << "중복없음";
        }
        else cout << "중복발견";
    }
    return 0;
}