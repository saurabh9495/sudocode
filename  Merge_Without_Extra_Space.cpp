#include <iostream>
#include <set>
using namespace std;
typedef long long int lli;

// 2
// 4 5
// 1 3 5 7
// 0 2 6 8 9

int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli noea, noeb, val;
        set<lli> s;
        cin >> noea >> noeb;
        for (lli j = 0; j < noea; j++)
        {
            cin >> val;
            s.insert(val);
        }
        for (lli k = 0; k < noeb; k++)
        {
            cin >> val;
            s.insert(val);
        }
        for (auto x : s)
        {
            cout << x << " ";
        }
    }
    return 0;
}