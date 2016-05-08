// C++11 
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> votes;

    int N;
    string Si;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> Si;
        votes[Si] += 1;
    }
    int count = 0;
    string ans;

    for(auto itr = votes.begin(); itr != votes.end(); ++itr){
       if(count < itr->second){
        count = itr->second;
        ans = itr->first;
        }
    }

    cout << ans << endl;
    return 0;

}
