#include <stdio.h>

using namespace std;

// 생성자는 여러개가 있을 수 있기 때문에, 역으로 찾는 함수는 존재하지 않는다.
// 그렇다면, 분해합을 1부터 n-1까지 반복하여 n의 생성자를 찾는다.

int sumChar(int n)
{
    int initN = n;
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }   // 여기까지가 자릿수합
    sum += initN;
    return sum;
}

bool genSearch(int n)
{
    bool isGen = false;
    for(int i = 1; i < n; ++i) {
        if(sumChar(i) == n) {
            isGen = true;
            break;
        }
    }
    if(isGen == true) return isGen;
    else return isGen;
}

int main()
{
    for (int i = 1; i <= 10000; ++i) {
        if(!genSearch(i)) printf("%d\n", i);
    }

    return 0;
}