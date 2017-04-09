#include<iostream>
using namespace std;

int main()
{
    double w, h; cin >> w >> h;

    if(w/h < 1.5) cout << "4:3" << endl;
    else cout << "16:9" << endl;

    return 0;
}
