#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int b;
    int total = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> b;
        total += b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());

    int r = total - 100;                    // 100보다 오버된 값
    int b1, b2;                             // 일곱난쟁이가 아닌 2명의 키
    for (int i = 0; i < 9; ++i) {           // 배열을 순회하며 난쟁이가 아닌 2명을 찾음
        for (int j = i+1; j < 9; ++j) {
            if(v[i] + v[j] == r) {
                b1 = v[i];
                b2 = v[j];
            }
        }
    }

    for(int x : v) {
        if(x != b1 && x != b2)
            cout << x << endl;
    }

    return 0;
}