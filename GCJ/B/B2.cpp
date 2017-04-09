#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <functional>


using namespace std;

#define MAX 1111111111111111112
#define ll long long

vector<ll>  tidy_numbers;


void make_tidys(){
    for(int i = 1; i <= 9; i++) tidy_numbers.push_back( (ll)i );
    int posl = 0, posr = 9;
    int count=0;

    bool flag = true;
    while(flag){
        for(int j = posl; j < posr; j++){
            for(int i = 1; i <= 9; i++){
                if(tidy_numbers[j] % 10 <= i) {
                    if(tidy_numbers[j]*10+i < MAX) {
                        count++;
                        tidy_numbers.push_back((ll)(tidy_numbers[j] * 10 + i));
                    }else{
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false){ break; }
        }
        posl = posr;
        posr += count;
        count = 0;

    }
}




int main()
{
    int T; cin >> T;
    ll ans;
    make_tidys();
    sort(tidy_numbers.begin(), tidy_numbers.end());

    for(int i = 1; i <= T; i++) {
        ans = 0;
        ll n;
        cin >> n;
        for (int i = 0; i <= tidy_numbers.size(); i++) {
            if(tidy_numbers[i] <=n && n < tidy_numbers[i+1]){
                ans = tidy_numbers[i];
            }
        }
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}