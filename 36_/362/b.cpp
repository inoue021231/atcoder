#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct Point {
  double x, y;
};

double distanceSquared(const Point& a, const Point& b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

bool isRightTriangle(const Point& p1, const Point& p2, const Point& p3) {
  double a2 = distanceSquared(p1, p2);
  double b2 = distanceSquared(p2, p3);
  double c2 = distanceSquared(p3, p1);

  return (std::abs(a2 + b2 - c2) < 1e-9) || (std::abs(a2 + c2 - b2) < 1e-9) || (std::abs(b2 + c2 - a2) < 1e-9);
}

int main() {
  Point p1, p2, p3;
  cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

  if(isRightTriangle(p1,p2,p3)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}