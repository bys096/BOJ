#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s1[21], s2[21],s3[40], result[90]={}, sum=0;
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            for(int k = 1; k <= c; k++)
            {
                sum = 0;
                sum += i+j+k;
                result[sum]++;
            }
        }
    }
    cout << find(result, result+90, *max_element(result, result+90)) - result;
    return 0;
}