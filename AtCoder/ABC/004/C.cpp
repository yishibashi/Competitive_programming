// complie C++ version 11< 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N; cin >> N;

    vector<int> v = {1, 2, 3, 4, 5, 6};


    for (int i = 0; i < N; i++){
       // cout << "i: "<<i%N + 1 << "   " << i%N + 2 << endl;
       // cout << "s: " << v[i%N+1] << "  " <<v[i%N+2] << endl;
        swap(v[i%5],v[i%5+1]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;


    return 0;
}
