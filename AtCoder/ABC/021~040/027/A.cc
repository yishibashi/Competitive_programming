#include <iostream>
using namespace std;
int main()
{
    int l,n,m; cin>>l>>n>>m;
    if(l==n) cout << m << endl;
    else if(l==m) cout << n << endl;
    else if(m==n) cout << l << endl;
    return 0;
}
