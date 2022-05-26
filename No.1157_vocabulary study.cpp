#include <iostream>

using namespace std;

int alpha[26], cnt =0;
string input;

int main() {
    cin >> input;

    for(int i=0;i < input.length();i++) {
        if(input[i]<97) alpha[input[i] - 65]++; //대문자
        else alpha[input[i] - 97]++; //소문자
    }

    int max = 0, max_indx=0;
    // 최다빈도수 및 그 수
    for(int i=0;i<26;i++) {
        if(max<alpha[i]) {
            max=alpha[i];
            max_indx = i;
        }
    }

    // 최다 빈도수와 같은 수를 가진 것이 더 있다면 증가
    for(int i=0;i<26;i++) {
        if(max==alpha[i]) cnt++;
    }

    if(cnt>1) cout << "?";
    else cout << (char)(max_indx+65);
}
