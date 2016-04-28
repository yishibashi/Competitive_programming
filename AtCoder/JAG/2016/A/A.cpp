#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N; cin >> N;
    int n_of_a = 0;
    int n_of_un = 0;
    string word;

    for (int i = 0; i< N; i++){
        cin >> word;
        if (word == "A") n_of_a++;
        if (word == "Un") n_of_un++;
        if (n_of_a < n_of_un){
            break;
        }
    }
    if (n_of_a == n_of_un) cout << "YES" << endl;
    else cout << "NO" <<endl;

    return 0;
}

