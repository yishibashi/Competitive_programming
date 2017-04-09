#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

#define MAX 1000000000000000
#define ll long long

vector<ll>  tidy_numbers;



bool check_tidy(int n){
    vector<int> numbers;
    bool flag;
    for(int i = 0; n != 0; i++) {
        numbers.push_back(n % 10);
        n = n / 10;
    }
    reverse(numbers.begin(), numbers.end());
    return is_sorted(numbers.begin(), numbers.end());
}




int main()
{
    int T; cin >> T;
    int ans;
    for(int i = 1; i <= T; i++) {
        ans = 0;
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            if (check_tidy(i)) ans = i;
        }
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}