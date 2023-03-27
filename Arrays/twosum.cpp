#include <bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> arr, int sum)
{
    unordered_set<int> w;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        if (w.find(x) != w.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        w.insert(arr[i]);
    }
}

int main()
{
    vector<int> a;
    int k;
    cin >> k;
    int t;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin >> t;
    vector<int> result = pairsum(a, t);
    if (result.size())
    {
        cout << result[0] << " " << result[1];
    }
    else
    {
        cout << "No matching pair";
    }
    return 0;
}
