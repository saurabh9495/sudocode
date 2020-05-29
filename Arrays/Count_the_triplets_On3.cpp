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
            for (int l = k + 1; l < v.size() - 1; l++)
            {
                for (int m = l + 1; m < v.size(); m++)
                {
                    if (v[k] + v[l] == v[m])
                    {
                        ctr++;
                        break;
                    }
                    else if (v[k] + v[l] < v[m])
                    {
                        break;
                    }
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

// 1
// 7
// 3 4 7 6 2 9 10

//2 3 4 6 7 9 10
//0 1 2 3 4 5 6

// k=0 l=1 m=2 5!=4
// k=0 l=1 m=3 5!=6
// k=0 l=2 m=3 ctr=1
// k=0 l=3 m=4 8!=7
// k=0 l=3 m=5 8!=9
// k=0 l=4 m=5 ctr=2
// k=0 l=5 m=6 11!=10
