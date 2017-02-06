#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int H, W; cin >> H >> W;
    vector<string> lines;

    for(int i = 0; i < H; i++){
        string l;
        cin >> l;
        lines.push_back(l);
    }

    for(string l : lines){
        cout << l << endl;
        cout << l << endl;
    }

    return 0;
}
