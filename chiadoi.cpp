//chiadoi
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> point;
#define x first
#define y second
double sqd(point p1, point p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}
main(){
	point a,b,c,m;
	cin >> a.x>>a.y>>b.x>>b.y>>m.x>>m.y;
	while (abs(a.x - b.x) < 1e-3 && abs(a.y - b.y) < 1e-3) {
        c = {(a.x + b.x) / 2, (a.y + b.y) / 2};
        if (sqd(c, m) < sqd(a, m)) {
            b = c; 
        } else {
            a = c;
        }
    }
	cout <<fixed << setprecision(2)<< a.x << " "<< a.y;
}
