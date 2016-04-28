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
        //cin.ignore();
        //cout << " ! " << tmp << endl;
        map.push_back(tmp);
    }
/*
    cout << "========================" << endl;
    cout << map[0] << endl;
    cout << map[1] << endl;
    cout << map[2] << endl;
    cout << map[3] << endl;
    cout << "========================" << endl;
*/
    for(int j = map.size(); j >= 0; j--){
        for(int i = map[1].size(); i >= 0; i--){
            cout << map[j][i] ;
        }
        cout << endl;
    }
/*
    cout << "========================" << endl;
    cout << map[0] << endl;
    cout << map[1] << endl;
    cout << map[2] << endl;
    cout << map[3] << endl;
*/
    return 0;
}
