#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &arr)
{
    int currsum = 0;
    int largest = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        currsum = currsum + arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        largest = max(largest, currsum);
    }
    int maxnegativeno = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxnegativeno < arr[i])
        {
            maxnegativeno = arr[i];
        }
    }
    if (maxnegativeno < 0)
        return maxnegativeno;

    return largest;
}
int main()
{
    vector<int> k =
        { -2, -1, 0, 2};
    cout << maxSubArray(k) << endl;
}