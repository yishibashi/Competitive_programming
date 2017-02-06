#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef set<int> si;
typedef map<string, int> msi;
int main()
{
    int ans = 0;
    int np = 0;
    int ng = 0;

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'g'){
            if(np < ng) {ans++; np++;}
            else{ng++;}
        }else{
            if(np < ng) {np++;}
            else {ng++; ans--;}
        }
//        cout << np << " " << ng << " " << ans << endl;
    }

    cout << ans << endl;

    return 0;
}
