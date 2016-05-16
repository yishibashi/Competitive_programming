#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    double no, mo;


    no = 360.00 * (n%12/12.0)  + 30 * (m/60.0);

    mo = 360.00 * (m/60.0);

    double ans;

    ans = max(no,mo) - min(no,mo);

    if(ans>180) ans = 360-ans;

    cout << fixed << setprecision(4) << ans << endl;

    return 0;
}
