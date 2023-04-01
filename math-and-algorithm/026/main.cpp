#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//参照：https://github.com/E869120/math-algorithm-book/blob/main/editorial/chap3-4/chap3-4.pdf
int main() {
    int N;
    cin >> N;

    double Answer = 0.0;
    for (int i = N; i >= 1; i--) {
        Answer += 1.0 * N / i;
    }

    printf("%.12lf\n", Answer);
    return 0;
}