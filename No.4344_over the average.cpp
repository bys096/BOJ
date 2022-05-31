#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t, n, avg;
int arr[1000] = {};
int sum = 0, avgC = 0;

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        avgC = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        avg = sum / n;
        for(int k  = 0; k < n; k++)
        {
            if(arr[k] > avg)
                avgC++;
        }

//       ----- cout 객체의 소수점 출력값 고정 방법 -----
//        cout << setprecision(3) << fixed;
//        cout << (double) avgC / n * 100<< "%" << endl;

        printf("%.3f%%\n", (double) avgC / n * 100);
    }

    return 0;
}