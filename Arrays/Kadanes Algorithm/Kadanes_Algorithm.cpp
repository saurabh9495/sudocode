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
        cin >> noe;
        for (lli j = 0; j < noe; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        int max_far = INT8_MIN, max_here = 0;
        for (int k = 0; k < v.size(); k++)
        {
            max_here = max_here + v[k];
            if (max_far < max_here)
                max_far = max_here;
            if (max_here < 0)
                max_here = 0;
        }
        cout << max_far << endl;
    }
    return 0;
}