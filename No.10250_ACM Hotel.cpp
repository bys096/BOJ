#include <iostream>

using namespace std;

string roomCheck(int h, int w, int n)
{
    string str ="";
    int checkIn = 0;
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= h; j++){
            checkIn++;
            if(checkIn == n) {
                str += to_string(j);
                if(i < 10) str += "0";
                str += to_string(i);
                goto outer;
            }
        }
    }
    outer:
    return str;
}


int main()
{
    int t, h, w, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> h;
        cin >> w;
        cin >> n;
        cout << roomCheck(h, w, n) << endl;
    }

    return 0;
}