#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int na[500001], ma[500001], n, m;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> na[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> ma[i];

    sort(na, na+n);

    for(int i = 0; i < m; i++)
    {
        auto up = upper_bound(na, na+n, ma[i]);
        auto low = lower_bound(na, na+n, ma[i]);
        cout << up - low << ' ';
    }
    return 0;
}