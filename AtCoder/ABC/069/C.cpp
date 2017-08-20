#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ne = 0, nee = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 4 == 0)
            nee++;
        else if (a % 2 == 0)
            ne++;
    }

    int no = n - ne - nee;

    if (nee - no >= 0)
        cout << "Yes" << endl;
    else if (nee + 1 == no && ne == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
