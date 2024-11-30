#include "banc.h"

using namespace std;

banc::banc(client p1, double p2) {
  if ( p1.money-p2 < 0) {
    cout << "error" << endl;
    return;
  } else
    balance = p2;
  invest = 0;
};