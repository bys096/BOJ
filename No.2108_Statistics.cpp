#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main() {
    int arr[8001] = {0};
    vector<int> v;

    int n;
    int sum = 0;

    cin >> n;

    int vPush;
    for (int i = 0; i < n; i++) {
        cin >> vPush;
        v.push_back(vPush);
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0) arr[v[i]]++;
        else arr[abs(v[i]) + 4000]++;
    }

    // 평균
    for(int i = 0; i < v.size(); i++)
        sum += v[i];
    int avg = round((double)sum / n);
    // 정렬
    sort(v.begin(), v.end());

    // 중간 위치 Element
    int mid = v[v.size() / 2];

    // 최대, 최소값
    int max = v.back();
    int min = v.front();

    int mostUsedNumber;
    vector<int> mostUsedNumber_list;
    int max_cnt = *max_element(arr, arr + 8001);
    for(int i = 0; i < 8001; i++){
        if(arr[i] == max_cnt)
            if(i > 4000)
                mostUsedNumber_list.push_back((i-4000) * -1);
            else
                mostUsedNumber_list.push_back(i);
    }
    sort(mostUsedNumber_list.begin(), mostUsedNumber_list.end());
    if(mostUsedNumber_list.size() == 1) mostUsedNumber = mostUsedNumber_list.front();
    else mostUsedNumber = mostUsedNumber_list[1];
    int range = max-min;


    cout << avg << endl;
    cout << mid << endl;
    cout << mostUsedNumber << endl;
    cout << range << endl;


    return 0;
}