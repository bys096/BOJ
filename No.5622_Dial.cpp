#include <iostream>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int cnt = 0;
    int x = 0;                  // target 위치. 다이얼 돌리고 난 후엔 0으로 복귀
    char c;
    for(int i = 0; i < s.size(); i++) {
        c = s[i];
        if((int)c <= 67 && c >= 65) x = 2;   // ABC
        else if((int)c <= 70) x = 3;         // DEF
        else if((int)c <= 73) x = 4;         // GHI
        else if((int)c <= 76) x = 5;         // JKL
        else if((int)c <= 79) x = 6;         // MNO
        else if((int)c <= 83) x = 7;         // PQRS
        else if((int)c <= 86) x = 8;         // TUV
        else if((int)c <= 90) x = 9;         // WXYZ

        cnt += x + 1;              // 1번은 2초이므로 +1
    }

    cout << cnt;


    return 0;
}