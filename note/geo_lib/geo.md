```c++
/*
分割された多角形の数
= 切っている本数+1
= (多角形と線分の交点の数 / 2) +1
= (線分と交差する多角形の辺の本数 / 2) +1
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)

#define EPS 1e-10//誤差で計算できるように
#define equals(a, b) (fabs(a) - (b) < EPS)
class Point{
	public:
	double x, y;
	//コンストラクタ
	Point():x(0),y(0) {}
    Point(double x, double y):x(x),y(y) {}
	//Point(double x = 0, y = 0): x(x), y(y){}
	//ベクトルの演算を定義
	Point operator + (Point p){ return Point(x + p.x, y + p.y); }//和
	Point operator - (Point p){ return Point(x - p.x, y - p.y); }//差
	Point operator * (double a){ return Point(a * x, a * y); }//スカラー倍
	Point operator / (double a){ return Point(x / a, y / a); }
	//ベクトルの大きさ(原点からベクトルを表す点までの距離)
	double abs(){ return sqrt(norm()); }
	//ベクトルの大きさの2乗
	double norm(){ return x * x + y * y; }
	//ベクトルの大小関係を表す演算を定義
	bool operator < (const Point &p) const {
		return x != p.x ? x < p.x : y < p.y;
	}
	bool operator == (const Point &p) const{
		return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
		//return equals(x, p.x) && equals(y, p.y);
	}
};
typedef Point Vector;//場合に応じてPointとVectorを使い分けてわかりやすくできるように

//ベクトルaとbの内積
double dot(Vector a, Vector b){
	return a.x * b.x + a.y * b.y;
}
//ベクトルaとbの外積
double cross(Vector a, Vector b){
	return a.x * b.y - a.y * b.x;
}

//反時計回りccw
int ccw(Point p0, Point p1, Point p2){
	Vector a = p1 - p0;
	Vector b = p2 - p0;
	//return値は変更すること
	if(cross(a, b) > EPS) return -2;//p0p1反時計回りの方向にp2
	if(cross(a, b) < -EPS) return -1;//p0p1時計回りの方向にp2
	if(dot(a, b) < -EPS) return 0;//p2p0p1の順で直線上にp2
	if(a.norm() < b.norm()) return 1;//p0p1p2の順で直線上にp2
	return 2;//p0p2p1の順で線分p0p1上にp2
}

//線分p1p2と線分p3p4の交差判定 (ベクトルp1p2とベクトルp3p4)
bool intersect(Point p1, Point p2, Point p3, Point p4){
	//returnで-1と-2が帰ってこればいい
	return (ccw(p1, p2, p3) + ccw(p1, p2, p4) == -3 &&
			ccw(p3, p4, p1) + ccw(p3, p4, p2) == -3);
}

int main(void){
	double ax, ay, bx, by;
	cin >> ax >> ay >> bx >> by;
	Point p1, p2;
	p1.x = ax; p1.y = ay;//p0p1は図形を分断する直線
	p2.x = bx; p2.y = by;

	int sum = 0;//線分と多角形の辺の交点の数
	int n; cin >> n;

	int x[101], y[101];
	rep(i, n){
		scanf("%d %d", &x[i], &y[i]);
	}

	Point p3, p4;
	rep(i, n){
		if(i != n - 1){
			p3.x = x[i]; p3.y = y[i];
			p4.x = x[i + 1]; p4.y = y[i + 1];
		}else{
			p3.x = x[i]; p3.y = y[i];
			p4.x = x[0]; p4.y = y[0];
		}
		if(intersect(p1, p2, p3, p4)) sum++;;
	}
	printf("%d\n", sum / 2 + 1);
	return 0;
}

```
