#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> st;
    int t;
    cin >> t;
    while (t--)
    {
        int value;
        cin >> value;
        st.insert(value);
    }

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }

    if (st.count(4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

/*
input format :
10
1 1 2 2 3 3 4 4 5 5
*/