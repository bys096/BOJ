#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string tmp;

    vector<string> v;               // 단어

    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 65) {            // 알파벳일때만 tmp에 추가
            tmp += s[i];
            if(i == s.size() - 1) v.push_back(tmp);
        }
        else if(i > 0){             // 두번째 자리 이후의 공백에서만 벡터에 푸쉬
            v.push_back(tmp);
            tmp="";
        }
    }
    cout << v.size() << endl;






    return 0;
}