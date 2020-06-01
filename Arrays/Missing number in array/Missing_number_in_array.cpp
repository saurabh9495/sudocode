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
        cin >> noe;
        lli sum = (noe * (noe + 1)) / 2, temp = 0;
        for (lli j = 0; j < noe; j++)
        {
            cin >> val;
            temp += val;
        }
        cout << sum - temp << endl;
    }
    return 0;
}