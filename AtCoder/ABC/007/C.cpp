#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<string> field;
int R, C;

int sy, sx, gy, gx;
typedef pair<int, int> P;
const int INF = -1;

vector< vector<int> > d;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int bsf()
{
    queue<P> que;

    for (int i =0; i < R; i++)
    {
        vector<int> tmp;

        for (int i = 0; i < C; i++)
        {
            tmp.push_back(INF);
        }
        d.push_back(tmp);
    }

    que.push( P(sy, sx) );
    d[sy][sx] = 0;

    while(que.size() )
    {
        P p = que.front(); que.pop();
        if (p.first == gy && p.second == gx){
            break;
        }

        for(int i = 0; i < 4; i++)
        {
            int nx = p.second+dx[i], ny = p.first+dy[i];

            if ( 0 <= nx && nx < C && 0 <= ny && ny < R &&
                    field[ny][nx] != '#' && d[ny][nx] == INF)

            {
                que.push(P(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gy][gx];
}


int main()
{
    string str;

    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--;sx--;
    gy--;gx--;
    cin.ignore();

    for (int i = 0; i < R; i++)
    {
        getline(cin, str);
        field.push_back(str);
    }
    cout << bsf() << endl;
/*
    for (int i = 0; i < R; i++){
        for (int j = 0; j < R; j++){
        cout << d[i][j] << " ";
        }
        cout << endl;
    }
*/
    return 0;
}

