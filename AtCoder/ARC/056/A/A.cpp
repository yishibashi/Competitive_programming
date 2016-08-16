#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int A, B, K, L; cin >> A >> B >> K >> L;

    cout << min( ((K/L)+1)*B, (K/L)*B + (K - (K/L)*L)*A ) << endl;


    return 0;

}