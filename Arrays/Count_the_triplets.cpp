#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int noe;
        cin >> noe;
        vector<int> v;
        for (int j = 0; j < noe; j++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        int ctr = 0;
        for (int k = 0; k < v.size() - 2; k++)
        {
            for (int l = k; l < v.size() - 2; l++)
            {
                if (v[k] + v[k + 1] == v[l + 2])
                {
                    ctr++;
                }
                else if (v[k] + v[k + 1] > v[l + 2])
                {
                    break;
                }
            }
        }
        if (ctr)
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