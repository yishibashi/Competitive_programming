#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int x;
    cin >> x;

    long long int ans = (x / (6+5))*2;

    if(x%(6+5) > 6) ans+=2;
    else if(x%(6+5) > 0) ans++;
    
    cout << ans << endl;

    return 0;
}
