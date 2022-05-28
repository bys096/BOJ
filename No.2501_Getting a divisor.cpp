#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, minIndex;        // n의 약수 중 찾고자 하는 index
    vector<int> v;
    cin >> n;
    cin >> minIndex;
    minIndex--;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            v.push_back(i);
    }
    cout << v[minIndex];

    return 0;
}