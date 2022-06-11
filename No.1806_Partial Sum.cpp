#include <iostream>

using namespace std;

int main()
{
    int arr[100000], n, s;
    int end=0, size=0, minSize=1000000001, sum=0;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int start=0; start < n; start++)
    {
        while(sum < s && end < n)
        {
            sum += arr[end];
            size++;
            end++;
        }

        if(minSize > size && sum >= s)		// 수를 만들 수 있는 최소 사이즈를 구함
            minSize = size;

        sum -= arr[start];
        size--;					// start를 줄여나갈 때마다 size도 1칸씩 줄인다
    }

    cout << ((minSize == 1000000001) ? 0 : minSize);

    return 0;
}