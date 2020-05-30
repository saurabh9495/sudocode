#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
typedef long long int lli;

// 2
// 4 5
// 1 3 5 7
// 0 2 6 8 9

// Input: arr1[] = {10};
//        arr2[] = {2, 3};
// Output: arr1[] = {2}
//         arr2[] = {3, 10}

int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli noea, noeb, val;
        vector<lli> arr1;
        vector<lli> arr2;
        vector<lli> v;
        cin >> noea >> noeb;
        for (lli j = 0; j < noea; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        for (lli k = 0; k < noeb; k++)
        {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        lli k = 0;
        for (lli l = 0; l < v.size(); l++)
        {
            if (l < noea)
            {
                arr1.push_back(v[l]);
            }
            else
            {
                arr2.push_back(v[l]);
            }
            cout << v[l] << " ";
        }
        cout << endl;
    }
    return 0;
}