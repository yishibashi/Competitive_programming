#include<iostream>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);

    if(a==5 && b == 5 && c == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
