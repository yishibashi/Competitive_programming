#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    int N, M;
    list<int> ds, ts;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        ds.push_back(d);
    }
    ds.sort();

    cin >> M;
    for (int i = 0; i < M; i++) {
        int t;
        cin >> t;
        ts.push_back(t);
    }
    ts.sort();

    if (N < M) {
        cout << "NO" << endl;
        return 0;
    }

    auto ds_itr = ds.begin();
    for (auto ts_itr = ts.begin(); ts_itr != ts.end(); ++ts_itr) {
        while (*ds_itr < *ts_itr) {
            ds_itr++;
        }
        if (*ds_itr > *ts_itr) {
            cout << "NO" << endl;
            return 0;
        }
        ds_itr++;
    }

    cout << "YES" << endl;

    return 0;
}
