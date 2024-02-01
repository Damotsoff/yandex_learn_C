#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N ;
    int avg = 0;
    cin >> N;
    vector<int> avgmax;
    vector<int> temp(N);
    for (int& i : temp)
    {
        cin >> i;
    }
    for (auto s : temp)
    {
        avg += s;
    }
    avg = avg / temp.size();

    for (int i = 0; i < temp.size(); ++i)
    {
        if (temp[i] > avg)
        {
            avgmax.push_back(i);
        }
    }
    cout << avgmax.size() << endl;
    for (int i = 0; i < avgmax.size(); ++i)
    {
        if (i < avgmax.size() - 1)
        {
            cout << avgmax[i] << " ";
        }
        else
        {
            cout << avgmax[i];
        }
    }
    return 0;
}