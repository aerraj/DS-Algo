#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countMinSwaps(vector<int> arr)
{

    int n = arr.size();
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++)
    {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap, ap + n);
    vector<bool> visited(n, false);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true || ap[i].second == i)
        {
            continue;
        }
        int node = i;
        int cycle = 0;
        while (!visited[node])
        {
            visited[node] = true;
            int nextnode = ap[node].second;
            node = nextnode;
            cycle++;
        }
        sum = sum + cycle - 1;
    }
    return sum;
}

int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    cout << countMinSwaps(arr) << endl;
    return 0;
}
