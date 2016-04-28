#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int N, M, T; cin >> N >> M >> T;
    int tmp;
    vector<int> time(T+1,0);
    int ans = 0;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        for(int i = tmp-M; i < tmp+M && i < T; i++){
            if(time[i] == 0) {
                time[i] = 1;
                ans++;
            }
        }
    }
    cout << T - ans << endl;

    return 0;
}

