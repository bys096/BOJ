#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int coinTypes[11] = {};
int cnt = 0;
int n, target;

bool compareTo(int a, int b)
{
    if(a > b)
        return a;
}

int main()
{
    cin >> n >> target;

    for(int i = 0; i < n; i++)
        cin >> coinTypes[i];

    sort(coinTypes, coinTypes+11, compareTo);

    for(int i = 0; i< n; i++)
    {
        if(target >= coinTypes[i])
        {
            cnt += target/coinTypes[i];
            target %= coinTypes[i];
        }
    }

    cout << cnt;

    return 0;
}