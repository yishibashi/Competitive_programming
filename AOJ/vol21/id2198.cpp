#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
struct Plant {
    string Name;
    double Score;
};

bool sorP(const Plant &a, const Plant &b) {

    if (a.Score > b.Score) {
        return a.Score > b.Score;
    }
    else {
        return a.Name < b.Name;
    }
}

int main() {
    int N;
    while (cin >> N && N) {
        vector<Plant> p;
        for (int i = 0; i < N; i++) {
            string name;
            double score;
            int price, a, b, c, d, e, f, sprice, m;
            cin >> name >> price >> a >> b >> c >> d >> e >> f >> sprice >> m;
            score = (double) (sprice * f * m - price)*1.0 / (a + b + c + (d + e) * m);
            p.push_back({name, score});
        }
        sort(p.begin(), p.end(), sorP);
        for (int i = 0; i < N; i++) {
            cout << p[i].Name << endl;
        }
        cout << "#" << endl;

    }
    return 0;
}
