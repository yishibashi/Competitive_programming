//
// Created by KAYA on 4/11/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> times;
    string time;

    for (int i = 0; i < N; i++){
        getline(cin, time, '-');
        times.push_back(time);
    }

    for (int i = 0; i < N; i++){
        cout << times[i] << endl;

    }

    return 0;

}
