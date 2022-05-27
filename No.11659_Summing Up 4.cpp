#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int size, t;
    scanf("%d", &size);
    scanf("%d", &t);
    int sum = 0;
    int tmp, l, r;
    vector<int> v(size+1, 0);

    for(int i = 1; i < v.size(); i++) {
        scanf("%d", &tmp);
        sum += tmp;
        v[i] = sum;
    }

    for(int i = 0; i < t; i++) {
        scanf("%d", &l);
        scanf("%d", &r);
        printf("%d\n", v[r] - v[l-1]);
    }

    return 0;
}