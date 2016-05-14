#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> mcxi;
map<string, int> t2n;

int clc_mcxi(string ord){
    int ans = 0;
    int tn=0;
    string tmp;
    for(int j = 0; j < ord.size(); j++){
        tmp = ord[j];
        if(t2n[tmp]){
            tn = t2n[tmp];
        }
        else{
            if(tn!=0){
                ans += tn * mcxi[tmp];
            }
            else ans += mcxi[tmp];
            tn = 0;
        }
    }
    return ans;
}


string n2mcxi(int n){
    string mcxi = "";
    int tmp = n;
    if(n / 1000) {
        if(n / 1000 != 1){
            mcxi += to_string(n/1000);
            mcxi += "m";
        }
        else mcxi += "m";
        n = n % 1000;
    }

    if(n / 100) {
        if(n / 100 != 1){
            mcxi += to_string(n/100);
            mcxi += "c";
        }
        else mcxi += "c";
        n = n % 100;
    }

    if(n / 10) {
        if (n / 10 != 1){
            mcxi += to_string(n/10);
            mcxi += "x";
        }
        else mcxi += "x";
        n = n % 10;
    }

    if(tmp % 10 >=2){
        mcxi = mcxi + to_string(tmp%10) + "i";
    }
    else if(tmp%10 == 1) mcxi += "i";

    return mcxi;

}


int main()
{
    int n; cin >> n;
    string order1;
    string order2;

    mcxi["m"] = 1000;
    mcxi["c"] = 100;
    mcxi["x"] = 10;
    mcxi["i"] = 1;
    t2n["2"] = 2;
    t2n["3"] = 3;
    t2n["4"] = 4;
    t2n["5"] = 5;
    t2n["6"] = 6;
    t2n["7"] = 7;
    t2n["8"] = 8;
    t2n["9"] = 9;

    for (int i = 0; i < n; i++){
        cin >> order1 >> order2;
        cout << n2mcxi(clc_mcxi(order1) +  clc_mcxi(order2) ) << endl;
    }
    return 0;
}

