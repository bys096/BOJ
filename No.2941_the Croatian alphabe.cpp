#include <iostream>

using namespace std;


// c, d, l, n, s, z
int main()
{
    string str;
    char c, fc, ffc;
    int cnt = 0;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++) {
        c = str[i];                     // 현재 문자
        cnt++;                          // 문자 한 칸당 1씩 증가
        if(i == 0)
            continue;
        else if(i > 0)
            fc = str[i - 1];            // 전 문자

        // 단어라면 그 단어의 n-1의 길이 만큼 cnt에서 제외
        if(c == '=' && fc == 'c')
            cnt--;
        else if(c == '-' && fc == 'c')
            cnt--;
        else if(c == '=' && fc == 'z' && str[i-2] == 'd')   // 3글자 단어는 2글자 단어와의 조건 중복 주의.
            cnt -= 2;
        else if(c == '=' && fc == 'z')
            cnt--;
        else if(c == '-' && fc == 'd')
            cnt--;
        else if(c == 'j' && fc == 'l')
            cnt--;
        else if(c == 'j' && fc == 'n')
            cnt--;
        else if(c == '=' && fc == 's')
            cnt--;
    }

    cout << cnt;
    return 0;
}