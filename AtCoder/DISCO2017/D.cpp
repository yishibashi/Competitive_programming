#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int H, W; cin >> H >> W;
    int A, B; cin >> A >> B;
    int ans = 0;
    vector<string> map;
    for(int i = 0; i < H; i++){
        string s; cin >> s;
        map.push_back(s);
    }
    vector<pair<int, int> > EW;
    vector<pair<int, int> > NS;

    int n_ns_sym = 0;
    int n_ew_sym = 0;
    int n_S = 0;
    for(int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if(map[i][j] == 'S') n_S++;
            if (map[i][j] != map[i][W + 1 - j]) {
                n_ew_sym++;
            }
            else if (map[i][j] != map[H + 1 - i][j]) {
                n_ns_sym++;
            }
        }
    }
    n_ew_sym /= 2;
    n_ns_sym /= 2;
    n_S = n_S - n_ew_sym - n_ns_sym;

    for(int i = 0; i < H/2; i++){
        for(int j = 0; j < W/2; j++){
            if(map[i][j] != map[i][W+1-j]){
                if(map[i][j] == 'S'){
                    map[i][j] = '.';
                } else {
                    map[i][W+1-j] = '.';
                }
                n_ew_sym--;
                if(n_ns_sym) {
                    ans += B;
                } else if(n_ew_sym){
                    ans += (A+B);
                } else {
                    break;
                }
            }
            if(map[i][j] != map[H+1-i][j]){
                if(map[i][j] == 'S'){
                    map[i][j] = '.';
                } else {
                    map[H+1-i][j] = '.';
                }
                n_ns_sym--;
                if(n_ew_sym) {
                    ans += A;
                }else if(n_ns_sym){
                    ans += (A+B);
                } else {
                    break;
                }
            }
        }
    }

    ans += (n_S / 2) * (A+B);


    cout << ans << endl;

    return 0;
}
