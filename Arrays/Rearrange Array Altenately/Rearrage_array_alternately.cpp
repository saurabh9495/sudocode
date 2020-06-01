#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

// 1 2 3 4 5 6 7
// 6 1 5 2 4 3

int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli noe, val;
        vector<lli> v;
        cin >> noe;
        for (lli j = 0; j < noe; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        for (lli j = 0; j < noe / 2; j++)
        {
            cout << v[noe - j - 1] << " " << v[j] << " ";
        }
        if (noe % 2 != 0)
        {
            cout << v[(noe / 2)] << endl;
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}