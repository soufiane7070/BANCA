#include "client.h"
#include <iostream>
using namespace std;

class banc {
  double balance;
  double invest;
public:
  banc(client p, double p2);
 
  void investimento_breve(client p, double sold, double inte) {
      if (sold - balance == 0) {
          cout << "error" << endl;           //controllo se il cliente ha la somma investita
          return;
      }
      cout << "investimento breve di 1 anno" << endl;
      invest += sold;
      cout << "ok" << "la quantit� investita aumenter� e del" << " % " << inte << " al mese" << endl;
      for (int i = 0; i < 12; i++) {
          p.add_mony(100.0);
          cout << "vuoi saltare un mese?(y/n)" << endl;
          char chs;
          cin >> chs;
          if (chs == 'y') { continue; }
          invest += (inte * invest) / 100;
      }

      balance += invest;
      invest = 0;
  };
  void investimento_medio(client p, double sold, double inte) {
      if (sold - balance == 0) {
          cout << "error" << endl;

          return;                    
      }
      cout << "investimento medio di 3 anni" << endl;
    invest += sold;
    cout << "ok" << "la quantita investita aumentera e del" << "%" << inte
         << " al mese" << endl;
    for (int i = 0; i < 36; i++) {
        p.add_mony(100.0);
        cout << "vuoi saltare un mese?(y/n)" << endl;
        char chs;
        cin >> chs;
        if (chs == 'y') { continue; }
        invest += (inte * invest) / 100;
      
    }
    balance += invest;

    //
    invest = 0;
  }
  void investimento_lungo(client p, double sold, double inte) {
      if (sold - balance == 0) {
          cout << "error" << endl;
          return;                 
      }
      cout << "investimento medio di 5 anni" << endl;
      invest += sold;
      cout << "ok" << "la quantita investita aumentera e del" << "%" << inte
          << " al mese" << endl;
      for (int i = 0; i < 12*5; i++) {
          p.add_mony(100.0);
          cout << "vuoi saltare un mese?(y/n)" << endl;
          char chs;
          cin >> chs;
          if (chs == 'y') { continue; }
          invest += (inte * invest) / 100;
          
      }
      balance += invest;

      invest = 0;
  }
  void investimento_basso_rish(client p, double sold, double inte) {
    invest = sold;
      inte = 3.0;
      if (sold - balance == 0) {
          cout << "error" << endl;
          return; 
      }
      srand(time(NULL));
      int succ;
      succ = rand() % 100;
      cout << "seleziona la durata del investimento" << endl;
      int dur;
      cin >> dur;
      for (int i = 0; i < dur; i++) {
        cout << "vuoi saltare un mese?(y/n)" << endl;
        char chs;
        cin >> chs;
        if (chs == 'y') {
          continue;
        }
        succ = rand() % 100;
        if (succ <= 95) {
          invest += (inte * invest) / 100;
          continue;
        } else 
           invest=invest- (4 * invest) / 100;

      }
      balance += invest;
      invest = 0;
  }

  void investimento_medio_rish(client p, double sold, double inte) {
    invest = sold;
    inte = 8.0;
    if (sold - balance == 0) {
      cout << "error" << endl;
      return;
    }
    srand(time(NULL));
    int succ;
    succ = rand() % 100;
    cout << "seleziona la durata del investimento" << endl;
    int dur;
    cin >> dur;
    for (int i = 0; i < dur; i++) {
      cout << "vuoi saltare un mese?(y/n)" << endl;
      char chs;
      cin >> chs;
      if (chs == 'y') {
        continue;
      }
      succ = rand() % 100;
      if (succ <= 80) {
        invest += (inte * invest) / 100;
        continue;
      } else
        invest = invest - (12 * invest) / 100;
    }
    balance += invest;
    invest = 0;
  }

    void investimento_alto_rish(client p, double sold, double inte) {
    invest = sold;
    inte = 15.0;
    if (sold - balance == 0) {
      cout << "error" << endl;
      return;
    }
    srand(time(NULL));
    int succ;
    succ = rand() % 100;
    cout << "seleziona la durata del investimento" << endl;
    int dur;
    cin >> dur;
    for (int i = 0; i < dur; i++) {
      cout << "vuoi saltare un mese?(y/n)" << endl;
      char chs;
      cin >> chs;
      if (chs == 'y') {
        continue;
      }
      succ = rand() % 100;
      if (succ <= 50) {
        invest += (inte * invest) / 100;
        continue;
      } else
        invest = invest - (30 * invest) / 100;
    }
    balance += invest;
    invest = 0;
  }
    
    void print_info() {
    cout << "Conto corrente:" << balance << endl;
    cout << invest << endl;
  };
  


};
