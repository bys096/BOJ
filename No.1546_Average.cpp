#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;          // 과목수
    int b;
    int max;
    double sum= 0;
    vector<double> v;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b;
        v.push_back(b);
    }

    max = *max_element(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        v[i] = v[i]/max*100;
        sum += v[i];
    }
    cout << sum / n;

    return 0;
}