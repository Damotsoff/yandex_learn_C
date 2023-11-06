#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    std::string a, b, c;
    std::cin >> a >> b >> c;
    std::cout << min({a, b, c});
    return 0;
}
