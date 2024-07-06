#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll sx, sy, tx, ty, distance_x, distance_y, ans = 0;
  cin >> sx >> sy >> tx >> ty;

  int x_d;

  if(sx - tx >= 0) {
    x_d = -1;
    distance_x = sx - tx;
  } else {
    x_d = 1;
    distance_x = tx - sx;
  }
  if(sy - ty >= 0) {
    distance_y = sy - ty;
  } else {
    distance_y = ty - sy;
  }

  if((sx + sy) % 2 == 1) {
    if(x_d == -1) {
      sx--;
      distance_x--;
    }
  } else {
    if(x_d == 1) {
      sx++;
      distance_x--;
    }
  }

  if((tx + ty) % 2 == 1) {
    if(x_d == -1) {
      tx--;
      distance_x++;
    }
  } else {
    if(x_d == 1) {
      tx++;
      distance_x++;
    }
  }

  if(distance_x <= distance_y) {
    ans += distance_x + (distance_y - distance_x);
  } else {
    ans += distance_y + ((distance_x - distance_y) / 2);
  }

  cout << ans << endl;

  return 0;

}