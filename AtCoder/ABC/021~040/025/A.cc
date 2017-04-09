#include <iostream>

using namespace std;

int main()
{

    char ws[5]; cin >> ws;
    int n; cin >> n;
    int count=0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            count++;
            if(count == n){
                cout << ws[i] << ws[j] << endl;
                break;
            }
        }
    }

    return 0;
}
