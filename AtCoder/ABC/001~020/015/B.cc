#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n; cin >> n;
    int bugs=0, bosu=0;
    for(int i = 0; i < n; i++){
        int an; cin >> an;

        if(an != 0){
            bugs += an;
            bosu++;
        }
    }

    cout << ceil((double) bugs / bosu) << endl;

    return 0;
}


