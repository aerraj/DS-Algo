#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{
    // store the occurrences in the result vector
    vector<int> result = {};
    int x = 1;
    int index;
    index = big.find(small);
    result.push_back(index);
    if (index != -1)
    {
        while (x != INT_MIN)
        {
            index = big.find(small, index + x);
            if (index == -1)
            {
                x = INT_MIN;
                break;
            }
            result.push_back(index);
            x += 1;
        }
    }
    return result;
}
int main()
{
    string big, small;
    big = "I liked the movie, acting in movie was great !";
    small = "Rishabh";
    vector<int> result = stringSearch(big, small);
    for (auto i : result)
    {
        cout << i << " " << endl;
    }
}
