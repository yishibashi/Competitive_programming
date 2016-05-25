#include <iostream>
#include <vector>

using namespace std;


int main()
{

    int n, p;

    while(cin >> n >> p && n && p){
        vector<int> ply(n,0);
        int tern=0;
        int cup = p;
        int answer;

        while(true){
            if (cup > 0){ 
                ply[tern]++;
                cup--;
            }
            else if (cup == 0){
                cup = ply[tern];
                ply[tern] = 0;
            }
            if (p == cup){
                cout << tern << endl;
                break;
            }
            tern++;
            if(tern >= n) tern = tern % n;
        }
    }


    return 0;
}

