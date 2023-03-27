//helps to find the maximum number of elements which occur in consecutive fashion
#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums)
{
    unordered_set<int> s;
    int maxLength = 0;
    for (auto it : nums)
    {
        s.insert(it);
    }
    for (auto k : s)
    {
        int parent = k - 1;
        if (s.find(parent) == s.end())
        {
            int next = k + 1;
            int length = 1;
            while (s.find(next) != s.end())
            {
                next++;
                length++;
            }
            maxLength = max(length, maxLength);
        }
    }
    return maxLength;
}

int main()
{

    vector<int> v = {9, 2, 3, 4, 11, 12, 13, 14, 15};
    cout << longestConsecutive(v);

    return 0;
}
