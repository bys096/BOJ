#include <cstdio>

int main()
{
    int nInput;
    scanf("%d", &nInput);
    for(int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", nInput, i, nInput*i);
    return 0;
}