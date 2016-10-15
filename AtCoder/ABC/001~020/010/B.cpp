#include <iostream>

using namespace std;

int check(int h)
{
    int m;
    while(true){
        if(h % 2==0){
            m++;
            h--;
        }
        else if(h % 3 == 2){
            m++;
            h--;
        }
        else break;
    }
    return m;
}


int main()
{
    int N; cin >> N;
    int hs;

    for(int i = 0; i < N; i++){
        int tmp; cin >> tmp;
        hs += check(tmp);
    }

    cout << hs << endl;
    return 0;
}

