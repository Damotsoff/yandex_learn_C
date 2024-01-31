#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string x) {
    int x_len = x.size() -1;
    for (int i = 0; i < x_len; ++i) {
        if (x[i] != x[x_len  - i]) {
            return false;
        }
    }
    return true;
}

int main(){
    string in;
    cin >> in;
    cout << IsPalindrom(in);
    return 0;
}