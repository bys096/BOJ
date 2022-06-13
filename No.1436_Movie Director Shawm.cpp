#include <iostream>

using namespace std;

bool isOwari(int x)
{
    string strX = to_string(x);
    for(int i = 0; i < strX.size(); i++)
    {
        if(strX[i] == '6' && strX[i+1] == '6' && strX[i+2] == '6')
            return true;
    }
    return false;
}

int main()
{
    int n, i=660, cnt=0, ans;
    cin >> n;

    while(true)
    {
        if(cnt == n)
        {
            ans = i;
            break;
        }
        if(isOwari(i))
            cnt++;
        i++;
    }
    cout << ans-1;
}