
#include <iostream>
#include <string>

using namespace std;

class banc;
class client {
  double money;
  string nome;
  friend banc;

public:
  client(double mon, string nom);
  void add_mony(double cash) { money += cash; };
  void print_info() {
    cout << "i tuoi soldi sotto il letto: " << money << " Sign."<<nome << endl;

  }
};
