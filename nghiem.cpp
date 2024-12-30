//Tim nghiem
#include<bits/stdc++.h>
#include <complex>
using namespace std;
typedef complex<double> phuc ;
void sol(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "vo so nghiem" << endl;
            } else {
                cout << "vo nghiem" << endl;
            }
        } else {
            double x = -c / b;
            cout << "1 nghiem: x = " << x << endl;
        }
        return;
    }
    double d = b * b - 4 * a * c;
    cout << "Delta = " << d << endl;
    if (d >= 0) {
        double x1 = (-b + sqrt(d)) / (2 * a),x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Nghiem thuc:" << "\nx1 = " << x1 <<"\nx2 = " << x2 << endl;
    } else {
        phuc x1 = phuc(-b,sqrt(-d))/(2*a),x2 = phuc(-b,-sqrt(-d)) / (2*a);
        cout << "Nghiem phuc:" << "\nx1 = " << x1 <<"\nx2 = " << x2 << endl;
    }
}
main(){
	double a, b, c;
    cin >> a >> b >> c;
    cout << fixed<< setprecision(2);
    sol(a, b, c);
}
