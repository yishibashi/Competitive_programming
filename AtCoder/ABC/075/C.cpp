#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, M;
int a[50], b[50];
bool graph[50][50];
bool checked[50];

void dfs(int v) {
    if (checked[v]) return;
    checked[v] = true;
    for (int w = 0; w < N; w++) {
        if (graph[v][w] == false) continue;
        if (checked[w] == true) continue;
        dfs(w);
    }
}

int main() {
    int ans = 0;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    for (int i = 0; i < M; i++) {
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

        for (int j = 0; j < N; j++) checked[j] = false;

        dfs(0);

        bool is_bridge = false;
        for (int j = 0; j < N; j++) {
            if (checked[j] == false) is_bridge = true;
        }

        if (is_bridge) ans++;

        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    cout << ans << endl;
    return 0;
}
