#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, tmp;
vector<int> nv, mv;

bool binary_search(int x)
{
    int start = 0, end = nv.size()-1, pivot;
    while(start <= end)
    {
        pivot = (start + end) / 2;
        if(nv[pivot] == x)
        {
            return true;
        }
        else if(x < nv[pivot])
            end = pivot - 1;
        else
            start = pivot + 1;
    }
    return false;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        nv.push_back(tmp);
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> tmp;
        mv.push_back(tmp);
    }

    sort(nv.begin(), nv.end());

    for(int i = 0; i < m; i++)
    {
        cout << binary_search(mv[i]) << "\n";
    }
    return 0;
}