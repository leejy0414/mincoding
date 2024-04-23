#include <iostream>
#include <cstring>
using namespace std;

int apt[1000000] = { 0 };
int black[1000000] = { 0 };
int DAT[100001] = { 0 };

int main() {
    int aptH, aptW;
    
    cin >> aptH >> aptW;
    int apttotal = aptH * aptW;
    int cnt = 0, cntbktotal = 0;
    int cntbk=0;
    for (int i = 0; i <apttotal; i++) {
        cin >> apt[i];
    }

    
    
    int bkH, bkW;
   
    cin >> bkH >> bkW;
    int bktotal = bkH * bkW;
    for (int i = 0; i < bktotal; i++) {
        cin >> black[i];
    }
    

    for (int i = 0; i < bktotal; i++) {
        DAT[black[i]] = 1;
    }
    for (int i = 0; i < apttotal; i++) {
        cntbk += DAT[apt[i]];
    }


    cnt = apttotal - cntbk;
   
    cout << cntbk << endl << cnt;
    return 0;
}