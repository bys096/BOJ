#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> prq, indexq;
int n = 5, target;
int tmp, tmp2, maxpr, t;
int main()
{
    cin >> t;
    for(int z = 0; z < t; z++) {
        cin >> n >> target;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            prq.push_back(tmp);
            indexq.push_back(i);
        }
        int cnt = 0;
        while (true) {
            maxpr = *max_element(prq.begin(), prq.end());
            if (maxpr == prq.front()) {
                cnt++;
                if (indexq.front() == target) break;
                prq.pop_front();
                indexq.pop_front();
            } else {
                tmp = prq.front();
                tmp2 = indexq.front();
                prq.pop_front();
                indexq.pop_front();
                prq.push_back(tmp);
                indexq.push_back(tmp2);
            }
        }
        prq.clear();
        indexq.clear();
        cout << cnt << endl;
    }





    return 0;
}