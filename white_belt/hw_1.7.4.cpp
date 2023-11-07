#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string a;
    vector<int> idx(0);
    cin >> a;

    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (idx.size() < 2 && a[i] == 'f')
        {
            idx.push_back(i);
        }
    }
    if (idx.size() == 1)
    {
        cout << -1;
    }
    else if (idx.size() == 0)
    {
        cout << -2;
    }
    else if (idx.size() == 2)
    {
        cout << idx[1];
    }
    return 0;
}
