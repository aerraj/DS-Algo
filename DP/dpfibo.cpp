#include <bits/stdc++.h>
using namespace std;
// datatypes
#define int long long int
#define very ios_base::sync_with_stdio(false);
#define fast cin.tie(NULL);
#define IO cout.tie(NULL);
#define endl "\n"
#define N 1000000
int dp[10000000];
int fib(int n, int dp[])
{
    if (n == 0 or n == 1)
        return n;
    if (dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}
int32_t main()
{
    very fast IO int n;
    cin >> n;
    while (n--)
    {
        int k = fib(n, dp);
        cout << n << " " << k << endl;
    }
}