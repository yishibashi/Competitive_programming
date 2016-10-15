#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string tmp;
    vector<string> map;

    for(int i = 0; i < 4; i++){
        getline(cin, tmp);
        map.push_back(tmp);
    }
    for(int j = map.size()-1 ; j > -1; j--){
        for(int i = map[1].size() ; i != -1; i--){
            cout << map[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
