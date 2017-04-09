#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> pole;
    for (int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        pole.push_back(tmp);
    }
    vector<int> cost(N,0);

    cost[1] = abs(pole[1]-pole[0]);
    for (int j = 2; j < N; ++j) {
        cost[j] = min(cost[j-1]+abs(pole[j]-pole[j-1]), cost[j-2]+abs(pole[j]-pole[j-2]));
    }
    cout << cost[N-1] << endl;

    return 0;

}