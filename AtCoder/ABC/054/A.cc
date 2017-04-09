#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b; cin >> a >> b;

    int A = stoi(a);
    int B = stoi(b);

    if(A == B) { cout << "Draw" << endl; }
    else if((A > B && B != 1) || A == 1) { cout << "Alice" << endl; }
    else { cout << "Bob" << endl; }
    return 0;
}
