#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string str, buffer;
vector<string> v;
int sum = 0;
int sum2 = 0;

int main()
{
    cin >> str;                                        // -를 기준으로 나눠, 그 수들을 전부 더한뒤 첫째 수에서 빼주면 가장 작은 수가 나온다.
    stringstream ss(str);
    while(getline(ss, buffer, '-'))         // -를 기준으로 나눔
        v.push_back(buffer);

    int x = 0;
    for(int i = 0; i < v.size(); i++)
    {
        x = 0;
        ss.clear();
        ss.str(v[i]);
        while(getline(ss, buffer, '+'))     // + 단위로 나눈 뒤, 그 수들을 더함
            x += stoi(buffer);
        if(i == 0) sum += x;
        else sum2 += x;
    }

    cout << sum - (sum2);                             // 첫째 수에서 더한 값들을 뺌

    return 0;
}