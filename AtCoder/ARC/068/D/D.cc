#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ns;
    vector<bool> bl;
    int n; cin >> n;
    int ans;

    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        ns.push_back(tmp);
        bl.push_back(true);
    }

    sort(ns.begin(), ns.end());

    for(int i = 0; i < n; i += 3){
        if(ns[i] == ns[i+1] == ns[i+2]){
            bl[i] = false;
            bl[i+2] = false;
        }
        else if(
    }

    for(int i = 0; i < n; i++){
        if(bl[i] == true) ans++;
    }

    cout << ans << endl;

    return 0;
}


