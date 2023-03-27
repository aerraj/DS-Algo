#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5}, {6, 7}, {8, 9}};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int k : arr[i])
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
