#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, arr[100001], end, start=0,sum=0,
    min = 2000000000, x, y;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    end = n-1;

    if(arr[0] > 0)
        cout << arr[0] << ' '<< arr[1];
    else if(arr[n-1] < 0)
        cout << arr[n-2] <<' ' << arr[n-1];
    else
    {
        while(true)
        {
            if(start >= end)
                break;
            sum = arr[start] + arr[end];
//            cout << sum << endl;
            if(abs(sum) < min)
            {
                min = abs(sum);
                x = arr[start];
                y = arr[end];

                if (sum == 0)
                    break;
            }
            if(sum < 0)
                start++;

            else if(sum > 0)
                end--;
        }
        cout << x << ' ' << y;
    }
    return 0;
}