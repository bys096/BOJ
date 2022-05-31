#include <iostream>
#include <algorithm>

using namespace std;
int arr[1000] = {};
int sumArr[1000] = {};
int sum = 0;
int n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    int result = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        sumArr[i] = sum;
        result += sumArr[i];
    }
    cout << result;

    return 0;
}