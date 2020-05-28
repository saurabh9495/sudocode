#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int testcases;
    for (int i = 0; i < testcases; i++)
    {
        int noe, x;
        cin >> noe >> x;
        vector<int> a;
        for (int j = 0; j < noe; j++)
        {
            int val;
            cin >> val;
            a.push_back(val);
        }
        rotate(a.begin(), a.begin() + x, a.end());
        for (int y : a)
        {
            cout << y << " ";
        }
    }
}