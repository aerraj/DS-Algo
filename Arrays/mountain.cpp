// code to find the highest peak in a series of peak
#include <bits/stdc++.h>
using namespace std;
int mountain(vector<int> a)
{
    int n = a.size();

    int largest = 0;

    for (int i = 1; i < n - 1;)
    {

        if (a[i] > a[i - 1] and a[i] > a[i + 1]) // peak check condition
        {

            int cnt = 1;
            int j = i; // j is equal to the current index
            // cnt backwards (left)
            while (j > 0 and a[j] > a[j - 1])
            {
                j--;
                cnt++;
            }
            // cnt forwards (right)
            while (i < n - 1 and a[i] > a[i + 1])
            {
                i++;
                cnt++;
            }

            largest = max(largest, cnt);
        }
        else
        {
            i++;
        }
    }
    return largest;
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    int res;
    res = mountain(arr);
    cout << "highest mountain peak = " << res << endl;
    vector<int> ar{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << mountain(ar) << endl;
    return 0;
}
