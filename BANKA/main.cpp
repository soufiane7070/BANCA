#include "banc.h"
using namespace std;

int main() {
  client p1(500.0, "sufyen");
  banc jew(p1, 300.0);
  p1.print_info();
 // jew.investimento_breve(p1, 50.0, 10);
  jew.print_info();
  return 0;
}
