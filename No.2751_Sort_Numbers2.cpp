#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    for(int x : arr) printf("%d\n", x);
    return 0;
}