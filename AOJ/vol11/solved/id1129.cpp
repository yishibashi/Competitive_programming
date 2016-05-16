#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,r;
    while(cin >> n >> r && n && r){
        vector<int> cards;
        for(int i = n; 1 <= i; i--){
            cards.push_back(i);
        }
        int p, c;
        for(int i = 0; i < r; i++){
            cin >> p >> c;
            for(int j = 0; j < c; j++){
                cards.insert(cards.begin(), cards[p+c-2]);
                cards.erase(cards.begin()+p+c-1);
            }
        }
        cout << cards[0] << endl;
    }
    return 0;
}
