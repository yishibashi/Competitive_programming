#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> prices;

    for(int i = 0; i < N; i++){
        int p; cin >> p;
        prices.push_back(p);
    }

    sort(prices.begin(), prices.end(), greater<int>());

    for(int i = 1; i < N; i++){
        if(prices[0] != prices[i]){
            cout << prices[i] << endl;
            break;
        }
    }


    return 0;
}
