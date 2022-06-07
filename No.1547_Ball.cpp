#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, in1, in2, tmp1, tmp2, tmp;
    int arr[3] = {1, 2, 3};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> in1 >> in2;
        for(int j = 0; j < 3; j++)
        {
            if(arr[j] == in1)
            {
                tmp1 = j;
                break;
            }
        }

        for(int j = 0; j < 3; j++)
        {
            if(arr[j] == in2)
            {
                tmp2 = j;
                break;
            }
        }

        tmp = arr[tmp1];
        arr[tmp1] = arr[tmp2];
        arr[tmp2] = tmp;
    }

    cout << arr[0];
    return 0;
}