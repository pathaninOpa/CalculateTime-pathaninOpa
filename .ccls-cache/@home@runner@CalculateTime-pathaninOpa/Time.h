#include <iostream>
using namespace std;
#include <iomanip>

void getTime(int& h, int& m) {
  cin >> h >> m;
}

int subtract(int h1, int m1, int h2, int m2) {
  int minute1 = h1 * 60 + m1;
  int minute2 = h2 * 60 + m2;
  int hrdif  = (minute2 > minute1) ? ((minute2 - minute1) / 60) : ((minute2 - minute1) / (-60));
  return hrdif;
}

int subtract(int m1, int m2) {
  if (m2 < m1) {
    return (60-m1) + m2;
  } else {
    return m2 - m1;
  }
}