#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;
    int a;
    cin >> n;
    int j = n - 1;
    unordered_map<int, int> m;

    while (j--)
    {
        cin >> a;
        m[a]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (m.find(i) == m.end())
        {
            cout << i << " ";
            break;
        }
    }
    return 0;
}
