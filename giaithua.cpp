#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1.0), EPS = 1e-9;
struct Point { double x, y; Point(double x=0, double y=0): x(x), y(y) {} };
double dist(Point a, Point b) { return hypot(a.x-b.x, a.y-b.y); }
double area(Point a, Point b, Point c) { return fabs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2; }
double circumR(Point a, Point b, Point c) {
    double ab = dist(a,b), bc = dist(b,c), ca = dist(c,a), A = area(a,b,c);
    return A < EPS ? 0 : ab*bc*ca/(4*A);
}
Point mid(Point a, Point b) { return Point((a.x+b.x)/2, (a.y+b.y)/2); }
double smallestCircleArea(Point a, Point b, Point c) {
    double ab = dist(a,b), bc = dist(b,c), ca = dist(c,a), md = max({ab, bc, ca});
    Point p, q, r;
    if(md == ab) { p = a; q = b; r = c; }
    else if(md == bc) { p = b; q = c; r = a; }
    else { p = c; q = a; r = b; }
    if(area(a,b,c) < EPS) return PI * pow(md/2, 2);
    Point center = mid(p,q);
    return (dist(center, r) <= md/2 + EPS) ? PI * pow(md/2, 2) : PI * pow(circumR(a,b,c), 2);
}
int main(){
    int t; cin >> t;
    while(t--){
        double x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << fixed << setprecision(6) << smallestCircleArea(Point(x1,y1), Point(x2,y2), Point(x3,y3)) << "\n";
    }
    return 0;
}

