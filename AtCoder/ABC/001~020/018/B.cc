#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S; cin >> S;
    int N; cin >> N;

    for(int i = 0; i < N; i++){
        int l, r; cin >> l >> r;
        reverse(S.begin()+(l-1), S.begin()+r);
    }

    cout << S << endl;

    return 0;
}
