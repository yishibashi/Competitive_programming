#include <iostream>

using namespace std;


int main()
{
    int N, M; cin >> N >> M;

    for (int b = 0; b <= 1; b++){
        for (int c = 0; c <= 100000; c++){
            if(2*c == M-2*N-b){
                if((4*N-M-b)>= 0){
                    cout << (4*N-M-b)/2 << " " << b << " " << c <<endl;
                    return 0;
                }
            }
        }
    }

    cout << "-1 -1 -1" << endl;
    return 0;
}
