#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;
int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli noe, val;
        vector<lli> v;
        bool flag = false;
        cin >> noe;
        for (lli j = 0; j < noe; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        lli ctr = 0;
        for (lli k = 0; k < v.size() - 2; k++)
        {
            for (lli l = k; l < v.size() - 1; l++)
            {
                bool present = binary_search(v.begin(), v.end(), v[k] + v[l + 1]);
                if (present)
                {
                    ctr++;
                    flag = true;
                }
            }
        }
        if (flag)
        {
            cout << ctr << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}