#include <iostream>
#include <cstring>
using namespace std;




int main() {
    string str;
    int a;
    char temp;
    int arr[27] = {0};
    
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++) {
       
        arr[str[i] - 'A'] = 1;
        }
        
    
    for (int i = 0; i < 27; i++) {

        if(arr[i]==1){
            char k = i + 'A';
            cout << k;
}

    }
    
    return 0;
}