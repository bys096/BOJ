#include <iostream>

/*
 * 서울시는 6월 1일부터 교통 혼잡을 막기 위해서 자동차 10부제를 시행한다.
 * 자동차 10부제는 자동차 번호의 일의 자리 숫자와 날짜의 일의 자리 숫자가 일치하면 해당 자동차의 운행을 금지하는 것이다.
 * 예를 들어, 자동차 번호의 일의 자리 숫자가 7이면 7일, 17일, 27일에 운행하지 못한다.
 * 또한, 자동차 번호의 일의 자리 숫자가 0이면 10일, 20일, 30일에 운행하지 못한다.
여러분들은 일일 경찰관이 되어 10부제를 위반하는 자동차의 대수를 세는 봉사활동을 하려고 한다.
 날짜의 일의 자리 숫자가 주어지고 5대의 자동차 번호의 일의 자리 숫자가 주어졌을 때 위반하는 자동차의 대수를 출력하면 된다.

입력
첫 줄에는 날짜의 일의 자리 숫자가 주어지고 두 번째 줄에는 5대의 자동차 번호의 일의 자리 숫자가 주어진다.
 날짜와 자동차의 일의 자리 숫자는 모두 0에서 9까지의 정수 중 하나이다.

출력
주어진 날짜와 자동차의 일의 자리 숫자를 보고 10부제를 위반하는 차량의 대수를 출력한다.
 *
 *
 */


#include <vector>
#include <sstream>
#include <string>

using namespace std;



int main() {
//    vector<string> v;
//    string str = "java c c++ python";
//    istringstream is(str);
//    string buff;
//    while (getline(is, buff, ' ')){
//        v.push_back(buff);
////        cout << buff << endl;
//
//    }
//    for(int i = 0; i < v.size(); i++)
//        cout<<v[i]<<endl;

    int date_num;
    int car_num[5];
    int cnt = 0;
    cin >> date_num;
    for(int i = 0; i < 5; i++){
        cin >> car_num[i];
        if(date_num == car_num[i])
            cnt++;
    }
    cout << cnt;






    return 0;
}
