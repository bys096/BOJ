#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareTo(string a, string b)
{
    if(a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}

vector<string> v, result;
int n;
string buffer;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        v.push_back(buffer);
    }

    sort(v.begin(), v.end(), compareTo);

    for (int i = 0;i < n; i++)
    {
        if (i > 0)
        {
            if (v[i] != v[i - 1])
                result.push_back(v[i]);
        }
        else
            result.push_back(v[i]);
    }

    for(string x : result) cout << x << endl;


    return 0;
}