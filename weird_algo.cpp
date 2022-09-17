#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long

using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void solve(int n)
{
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}

int32_t main()
{

    int n;
    cin >> n;
    solve(n);

    return 0;
}
