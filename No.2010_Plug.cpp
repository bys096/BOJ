#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cnt += v[i]-1;
    }
    cout << cnt+1;

    return 0;
}