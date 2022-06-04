#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void rotateLeft(deque<int> *q)
{
    int tmp = q->front();
    q->pop_front();
    q->push_back(tmp);
}

void rotateRight(deque<int> *q)
{
    int tmp = q->back();
    q->pop_back();
    q->push_front(tmp);
}

int main()
{

    deque<int> d, target;
    int n, m, tmp;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> tmp;
        target.push_back(tmp);
    }
    for(int i = 1; i <= n; i++)
    {
        d.push_back(i);
    }

    int cnt = 0;
    int mid = d.size()/2;
    int iter = find(d.begin(), d.end(), target.front()) - d.begin();

    while(!target.empty())
    {
        mid = d.size()/2;
        if(target.front() == d.front())
        {
            d.pop_front();
            target.pop_front();
            iter = find(d.begin(), d.end(), target.front()) - d.begin();
        }
        else if(iter <= mid)
        {
            rotateLeft(&d);
            cnt++;
        }
        else if(iter >= mid)
        {
            rotateRight(&d);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}

