#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;

    double slr = 0;


    for (int i = 1; i <= N; i++){

        slr += (10000.0 * i) / N;
    
    }

    cout << slr << endl;

    return 0;
}


