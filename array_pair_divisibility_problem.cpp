// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

bool canPair(vector<int> a, int k)
{
    int n = a.size();
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] % k;
        m[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (m[0] % 2 != 0)
            {
                return false;
            }
        }
        else if (m[a[i]] != m[k - a[i]])
        {
            return false;
        }
    }

    return true;
}
 