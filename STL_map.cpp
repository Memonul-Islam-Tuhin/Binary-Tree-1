#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int> mp;
    mp["tamim"] = 50;
    mp["shamim"] = 60;
    mp["rima"] = 70;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // if (mp.count("tamim"))
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    return 0;
}