#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareTo(long long a, long long b)
{
    return a > b;
}


int findH(long long *target, long long *n, long long *v, long long *max)
{
    long long pivot, start=1, end=*max, sum=0, i, result=0;
    while(start <= end)
    {
        sum = 0, i = 0;
        pivot = (start+end)/2;

        while(pivot < v[i])
        {
            if(sum > *target) break;
            else if(i == *n) break;
            else if(pivot < v[i])
                sum += v[i] - pivot;
            i++;
        }

        if(sum >= *target)
        {
            start = pivot+1;
            if(result < pivot) result = pivot;
        }
        else if(sum < *target)
            end = pivot-1;
    }
    return result;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n, m, max=0;
    cin >> n >> m;
    long long v[1000001];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(max < v[i]) max = v[i];
    }

    sort(v, v+n, compareTo);
    cout << findH(&m, &n, v, &max);

    return 0;
}