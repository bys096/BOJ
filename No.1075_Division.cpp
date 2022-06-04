#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, f, tmp;
    cin >> n >> f;
    long long begin = n / 100 * 100;

    for(int i = begin; i <= n+100; i++)
        if(i % f == 0)
        {
            tmp = i;
            break;
        }

    string result="";
    if(tmp % 100 < 10)
    {
        if(tmp % 100 == 0) result = "00";
        else result += '0'+ to_string(tmp%100);
    }
    else
        result = to_string(tmp%100);

    cout << result;

    return 0;
}