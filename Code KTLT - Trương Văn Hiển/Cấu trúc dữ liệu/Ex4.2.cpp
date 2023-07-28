/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <utility>

using namespace std;
using Point = pair<double, double>;

double area(Point a, Point b, Point c){
    double x = (b.first - a.first) * (c.second - a.second);
    double y = (c.first - a.first) * (b.second - a.second);
    return fabs(x-y)/2;
}

int main() {
    cout << setprecision(2) << fixed;
    cout << area({1, 2}, {2.5, 10}, {15, -5.25}) << endl;
    return 0;
}
