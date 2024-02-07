#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
    // cout << "enter operation number ";
    int operation_count;
    cin >> operation_count;
    vector<int> change_number(operation_count);
    vector<string> change_mode;
    vector<string> results;

    for(int& s: change_number)
    {
        string mode;
        cin >> mode;
        change_mode.push_back(mode);
        if(mode != "WORRY_COUNT")
        {
            cin >> s;
        }

    }
    for(int i = 0 ;i < change_mode.size();++i)
    {
        if(change_mode[i]=="COME" && change_number[i]>=0)
        {
            for(int idx = 0; idx<change_number[i];++idx)
            {
                results.push_back("COME");
            }
        }
        else if(change_mode[i]=="COME" && change_number[i] < 0)
        {
            results.resize(results.size() + change_number[i]);
        }
        else if(change_mode[i]=="QUIET")
        {
            results[change_number[i]] ="COME";
        }
        else if(change_mode[i]=="WORRY")
        {
            results[change_number[i]]="WORRY";
        }
        else if(change_mode[i]=="WORRY_COUNT")
        {
            int count = 0;
            for(int idx = 0;idx < results.size(); ++idx)
            {
                if(results[idx]=="WORRY")
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }


   

    return 0;
}