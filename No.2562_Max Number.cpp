#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr(9);
    int b;
    for(int i = 0; i < 9; i++) {
        cin >> b;
        arr[i] = b;
    }
    int max = *max_element(arr.begin(), arr.end());
    int max_index = max_element(arr.begin(), arr.end()) - arr.begin() + 1;
    cout << max << endl;
    cout << max_index;
    return 0;
}