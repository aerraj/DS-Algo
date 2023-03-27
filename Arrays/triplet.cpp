#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int> arr, int num)
{
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 3; i++)
    {
        // two pointer approach
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k)
        {
            int sum = arr[i];
            sum += arr[j];
            sum += arr[k];
            if (sum == num)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (sum > num)
            {
                k--;
            }
            else
                j++;
        }
    }
    return result;
}
int main()
{
    int size;
    vector<int> v;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int l;
        cin >> l;
        v.push_back(l);
    }
    int target;
    cin >> target;
    vector<vector<int>> result = triplet(v, target);
    for (auto k : result)
    {
        for (auto it : k)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
