#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int rankList[500001];
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> rankList[i];

    sort(rankList, rankList+n+1);

    long long sum=0;
    for(int i = 1; i <= n; i++)
        sum += abs(rankList[i] - i);

    cout << sum;





    return 0;
}