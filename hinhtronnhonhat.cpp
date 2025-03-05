/*Halcyon - Hinh tron nho nhat*/
#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef pair<double, double> pt;
const double pi = acos(-1.0), e = 1e-9;
main(){
    int t; cin >> t;
    cout << fixed << setprecision(6);
    while(t--){
        double x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        pt a = {x1,y1}, b = {x2,y2}, c = {x3,y3};
        auto d = [&](pt p, pt q){ return sqrt((p.x-q.x)*(p.x-q.x) + (p.y-q.y)*(p.y-q.y)); };
        double ab = d(a,b), bc = d(b,c), ca = d(c,a);
        double md = max({ab, bc, ca});
        pt p, q, r;
        if(fabs(ab-md)<e) { p = a; q = b; r = c; }
        else if(fabs(bc-md)<e) { p = b; q = c; r = a; }
        else { p = c; q = a; r = b; }
        double A = fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0, ans;
        if(A < e)
            ans = pi * pow(md/2.0, 2);
        else {
            pt tt = {(p.x+q.x)/2.0, (p.y+q.y)/2.0};
            double dr = d(tt, r);
            if(dr <= md/2.0 + e)
                ans = pi * pow(md/2.0, 2);
            else {
                double rc = ab * bc * ca / (4.0 * A);
                ans = pi * rc * rc;
            }
        }
        cout << ans << "\n";
    }
}

