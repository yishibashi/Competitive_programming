#include <iostream>
#include <vector>

typedef unsigned long long int ll;
using namespace std;

ll q, h, s, d, n;
ll ans = 0;

void dd(ll *n, ll *ans) {
    if (*n / 8) {
        *ans += (*n / 8) * d;
        *n -= (*n / 8) * 8;
    }
}

void ss(ll *n, ll *ans) {
    if (*n / 4) {
        *ans += (*n / 4) * s;
        *n -= (*n / 4) * 4;
    }
}

void hh(ll *n, ll *ans) {
    if (*n / 2) {
        *ans += (*n / 2) * h;
        *n -= (*n / 2) * 2;
    }
}

void qq(ll *n, ll *ans) {
    if (*n / 1) {
        *ans += (*n / 1) * q;
        *n -= (*n / 1) * 1;
    }
}

bool pairCompare(const std::pair<int, int> &firstElem,
                 const std::pair<float, int> &secondElem) {
    return firstElem.second < secondElem.second;
}

int main() {
    cin >> q >> h >> s >> d >> n;
    n *= 4;

    vector<pair<int, int> > qhsd{make_pair(q, q * 4), make_pair(h, h * 2),
                                 make_pair(s, s), make_pair(d, d / 2)};
    sort(qhsd.begin(), qhsd.end(), pairCompare);

    for (auto p : qhsd) {
        if (p.first == q && p.second == q * 4) {
            qq(&n, &ans);
        }
        if (p.first == h && p.second == h * 2) {
            hh(&n, &ans);
        }
        if (p.first == s && p.second == s) {
            ss(&n, &ans);
        }
        if (p.first == d && p.second == d / 2) {
            dd(&n, &ans);
        }
    }
    cout << ans << endl;

    return 0;
}
