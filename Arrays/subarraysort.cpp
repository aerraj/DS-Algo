#include <bits/stdc++.h>
using namespace std;
bool outoforder(vector<int> v, int i)
{
    int x = v[i];
    if (i == 0)
    {
        return x > v[i + 1];
    }
    else if (i == v.size() - 1)
    {
        return x < v[i - 1];
    }
    else
    {
        return x > v[i + 1] and x < v[i - 1];
    }
}
pair<int, int> subarraysort(vector<int> arr, int n)
{
    int small = INT_MAX;
    int large = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        if (outoforder(arr, i))
        {
            small = min(small, x);
            large = max(large, x);
        }
    }
    // next step find the right index where smallest and largest lie (subarray) for out solution
    if (small == INT_MAX)
    {
        return {-1, -1};
    }

    int left = 0;
    while (small >= arr[left])
    {
        left++;
    }
    int right = 0;
    while (large <= arr[right])
    {
        right--;
    }
    return {left, right};
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    auto y = subarraysort(a, n);

    cout << y.first << " " << y.second << endl;
    return 0;
}
