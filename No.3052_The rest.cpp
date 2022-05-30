#include <iostream>
#include <set>

using namespace std;
int tmp;
set<int> s;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> tmp;
        s.insert(tmp%42);
    }
    cout << s.size();

    return 0;
}