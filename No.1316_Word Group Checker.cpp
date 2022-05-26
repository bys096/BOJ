#include <iostream>

using namespace std;

bool spellCheck(string s, char c)
{
    bool isSpell = false;
    for(int i = 0; i < s.size(); i++) {
        if(s.empty()) break;
        else if(c == s[i]) {
            isSpell = true;
//            cout << s << "의 " << c << "중복 발생" << endl;
            break;
        }
    }
//    cout << "\n";
    return isSpell;
}


bool groupMake(string s)
{
       bool isGroup = true;
       string ben;
       string miniGroup;

       for(int i = 0; i < s.size(); i++) {
           // 벤에 있다면
           if(spellCheck(ben, s[i]) == true) {
               isGroup = false;
               break;
           }
           // 벤에 없다면
           else {
               // 미니에 없다면
               if(spellCheck(miniGroup, s[i]) == false) {
                   miniGroup.push_back(s[i]);
//                   cout << "미니추가 " << miniGroup << endl;
                }
               // 미니에 있고
               else {
                   // 글자 -1이랑 같다면(ben에 없는 연속중인글자)
                   if(s[i-1] == s[i]) {
                       miniGroup.push_back(s[i]);
//                       cout << "미니추가 " << miniGroup << endl;
                   }
                   // 글자 -1이랑 다르다면(ben에 없는 비연속적인 글자) -> ben목록에 추가
                   else {
                       miniGroup.push_back(s[i]);
                       if(spellCheck(miniGroup, s[i]) == true) {
                           isGroup = false;
                           break;
                       }

                       ben += miniGroup;
//                       cout << "미니그룹 초기화" << endl;
//                       cout << "ben목록 추가: " << ben << endl;
                       miniGroup.clear();
                       if(spellCheck(ben, s[s.size()-1]) == true) isGroup = false;
                   }
               }
           }
       }


//       if(isGroup) cout << "그룹생성" << endl;
//       else cout << "미생성" << endl;
       return isGroup;
}

int main()
{
    int t, cnt = 0;
    string sentence;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> sentence;
        if(groupMake(sentence) ==  true) {
            cnt++;
//            cout << "cnt: " << cnt <<endl;
        }
    }
    cout << cnt;

    return 0;
}