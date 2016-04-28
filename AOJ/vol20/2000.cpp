#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int N;
int field[21][21];
int M;
char drc;
int dst;
int dx, dy;
int getn;
static int x = 10, y = 10;

void move(int dx, int dy){
    if (dx){
        for(int i = 1; i <= abs(dx); i++){
            if(dx > 0) x++;
            else x--;
//            cout << x << ' ' <<y <<endl;
            if(field[y][x] == 1){
                getn++;
                field[y][x] = 0;
            }
        }
    }
    else{
        for(int i = 1; i <= abs(dy); i++){
            if (dy > 0) y++;
            else  y--;
//           cout << x << ' ' <<y <<endl;
            if(field[y][x] == 1){
                field[y][x] = 0;
                getn++;
            }
        }
    }
}

int main()
{

    while(cin >> N && N){
    for (int i = 0; i < 21; i++){
        for (int j = 0; j < 21; j++){
            field[i][j] = 0;
        }
    }
        x = 10, y = 10;
        int px, py;
        getn = 0;

        for (int i = 0; i < N; i++){
            cin >> px >> py;
            field[py][px] = 1;
        }

        cin >> M;
        for (int i = 0; i < M; i++){
            cin >> drc >> dst;
            if (drc == 'N') dx=0,dy=dst;
            if (drc == 'S') dx=0,dy=-dst;
            if (drc == 'E') dx=dst,dy=0;
            if (drc == 'W') dx=-dst,dy=0;
            move(dx,dy);
        }
        if (getn == N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}

