#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto k = upper_bound(v.begin(), v.end(), x);
        cout << (k - v.begin()) << endl;
    }

    return 0;
}
