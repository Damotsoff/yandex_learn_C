#include <iostream>
using namespace std;

int main()
{
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;

    if(A < B && X > 0 && Y > 0 && X <= 100 && Y <= 100){
        if(N > B){
            cout << N * (100 - Y) / 100;
        }else if(N > A){
            cout << N * (100 - X) / 100;
        } else {
            cout << N;
        }
    }

    return 0;
}