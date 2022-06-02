#include <iostream>
#include <deque>

using namespace std;

int n;
deque<int> inputStack(1), resultStack(1), increStack(1, 0);
deque<char> charStack;
int i = 1, x = 1;
int tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int j = 0; j < n; j++)
    {
        cin >> tmp;
        inputStack.push_back(tmp);
    }


    while(true)
    {
        if (increStack.back() > inputStack[x])
            break;

        else if (increStack.back() == inputStack[x])
        {
            if(increStack.size() == 1 && increStack[0] == 0) break;
            tmp = increStack.back();
            increStack.pop_back();
            charStack.push_back('-');
            resultStack.push_back(tmp);
            x++;
        }
        else if (increStack.back() != inputStack[x])
        {
            increStack.push_back(i);
            charStack.push_back('+');
            i++;
        }

    }

    if(resultStack == inputStack)
        for(char j : charStack)
            cout << j << "\n";

    else cout << "NO" << "\n";

    return 0;

}