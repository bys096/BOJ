#include <iostream>
#include <string>

using namespace std;
int input;
int cnt = 0;

string makeNewNum(int n)
{
    string result;
    int i = 0, sum = 0;
    int arr[3] = {};
    while(n > 0)
    {
        arr[i] = n % 10;
        sum += arr[i];
        n /= 10;
        i++;
    }
    result = to_string(arr[0]) + to_string(sum).back();
    return result;
}

int main()
{
    cin >> input;
    int target = input;

    while(true)
    {
        input = stoi(makeNewNum(input));
        cnt++;
        if(input == target)
            break;
    }
    
    cout << cnt;

    return 0;
}