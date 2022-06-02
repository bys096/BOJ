#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n, m, b;
    vector<int> hasCard, result;
    set<int> s;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> b;
        hasCard.push_back(b);
        s.insert(b);
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b;
        auto pos = s.find(b);
        if(pos == s.end())
            result.push_back(0);
        else
            result.push_back(1);
    }

    for(int x : result) cout << x << ' ';



    return 0;
}