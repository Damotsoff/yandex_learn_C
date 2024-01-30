#include <iostream>
#include <cmath>
using namespace std;

int Factorial(int x)
{
    if(x<=0 || abs(x)>10){
        return 1;
    }
    int sum = 1;
    for (int i=1; i <= x; ++i)
    {
        sum *= i;
    };
    return sum;
}

int main()
{
    cout << Factorial(10) << endl;
    return 0;
}