#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    cout << *max_element(vec.begin(), vec.end()) -
                *min_element(vec.begin(), vec.end())
         << endl;
    return 0;
}
