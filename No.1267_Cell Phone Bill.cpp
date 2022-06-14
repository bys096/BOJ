// 30초마다 10원 영식
// 60초마다 15원 민식
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> Ywage(n);
    vector<int> Mwage(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
    {
        Ywage[i] = ((v[i]/30)+1) * 10;
        Mwage[i] = ((v[i]/60)+1) * 15;
    }
    int ansM = 0, ansY =0;
    for(int x : Mwage) ansM += x;
    for(int x : Ywage) ansY += x;

    if(ansY < ansM)
        cout << "Y " << ansY;
    else if(ansY > ansM)
        cout << "M " << ansM;
    else
        cout << "Y M " << ansY;
    return 0;
}