#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int n;
int age, dex;
string name;
vector<tuple<int, string, int>> v;

bool compareTo(tuple<int, string, int> a, tuple<int, string, int> b)
{
    if(get<0>(a) == get<0>(b))
        return get<2>(a) < get<2>(b);
    return get<0>(a) < get<0>(b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i <  n; i++)
    {
        cin >> age >> name;
        dex = i;
        v.push_back(make_tuple(age, name, dex));
    }

    sort(v.begin(), v.end(), compareTo);

    for (int i = 0; i < n; i++)
        cout << get<0>(v[i]) << ' ' << get<1>(v[i]) <<  "\n";


    return 0;
}