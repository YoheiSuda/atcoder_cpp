#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int ax, ay;
    cin >> ax >> ay;

    int bx, by;
    cin >> bx >> by;

    int cx, cy;
    cin >> cx >> cy;

    int dx, dy;
    cin >> dx >> dy;

    /* 異なる二点A（Ax, Ay）、B（Bx, By）に対し、
     * 角AOBは "AxBy - AyBx > 0"の時180度未満であり、
     * "AxBy - AyBx <=0"の時180度以上である。
     * ただし、角度は反時計回りである。*/

    // abc
    int baX = ax - bx;
    int baY = ay - by;
    int bcX = cx - bx;
    int bcY = cy - by;

    int checkAbc = (bcX * baY) - (bcY * baX);

    // bcd
    int cbX = bx - cx;
    int cbY = by - cy;
    int cdX = dx - cx;
    int cdY = dy - cy;

    int checkBcd = (cdX * cbY) - (cdY * cbX);

    // cda
    int dcX = cx - dx;
    int dcY = cy - dy;
    int daX = ax - dx;
    int daY = ay - dy;

    int checkCda = (daX * dcY) - (daY * dcX);

    // dab
    int adX = dx - ax;
    int adY = dy - ay;
    int abX = bx - ax;
    int abY = by - ay;

    int checkDab = (abX * adY) - (abY * adX);

    if (checkAbc <= 0 || checkBcd <= 0 || checkCda <= 0 || checkDab <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
