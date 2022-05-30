#include <iostream>
#include <deque>

using namespace std;

int n;
int b, tmp, sum = 0;
deque<int> q;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if(b == 0) q.pop_back();
        else q.push_back(b);
    }

    while(!q.empty())
    {
        tmp = q.back();
        sum += tmp;
        q.pop_back();
    }

    cout << sum;

    return 0;
}