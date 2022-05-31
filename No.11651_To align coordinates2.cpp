#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

bool compareTo(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int t;
int x, y;
vector<pair<int, int>> v;

int main()
{
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        v.push_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end(), compareTo);

    for(int i = 0; i < t; i++)
        printf("%d %d\n", v[i].first, v[i].second);

    return 0;
}