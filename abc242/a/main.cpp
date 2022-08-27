#include <bits/stdc++.h>
using namespace std;

int main()
{
  double A, B, C, X;
  cin >> A >> B >> C >> X;

  double Answer = 0.0;

  if (X <= A)
  {
    Answer = 1.0;
  }
  else if (X <= B)
  {
    Answer = C / (B - A);
  }

  printf("%.12lf\n", Answer);
  return 0;
}