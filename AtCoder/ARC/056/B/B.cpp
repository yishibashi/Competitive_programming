// BFS???
#include <iostream>
#include <vector>

using namespace std;




int N,M,S;
vector<vector<int> > path(N+1, vector<int>());



void bfs(){


}




int main()
{
    cin >> N >> M >> S;

    // init path
    for (int i = 1; i <= M; ++i) {
        int u,v; cin >> u >> v;
        path[u].push_back(v);
        path[v].push_back(u);
    }
    for (int k = 0; k < N; ++k) {
        sort(path[k].begin(), path[k].end());
    }

    // show path
    for (int j = 1; j <= N; ++j) {
        for (int i = 0; i < path[j].size(); ++i) {
            cout << path[j][i];
        } cout<<endl;
    }



    return 0;

}