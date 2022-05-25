#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    scanf("%d", &n);
    int arr[10001] = {0};

    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        arr[tmp] += 1;
    }

    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < arr[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}