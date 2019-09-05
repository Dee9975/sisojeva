#include <iostream>
#include <string>

using namespace std;

class Audzeknis {
  public:
    //atributi
    string vards;
    string grupa;
    unsigned kurss;

    float getStipa(float videja, float kavejumi) {
      if(kavejumi < 10 && videja > 4)
        return videja * 10;
      else 
        return 10;
    }

    void printTings() {
        std::cout << "\nAudzeknis " << vards;
        std::cout << " no " << grupa << " kursa" << std::endl;
    }
};

int main() 
{
  Audzeknis admins;
  float videjaAtzime = 5.5;
  int kavejumuSkaits = 3;
  std::cout << "Ievadiet audzekna vardu un kursu: " << std::endl;
  std::cin >> admins.vards;
  std::cin >> admins.grupa;
  admins.printTings();
  std::cout << "sanem stipendiju: " << admins.getStipa(videjaAtzime, kavejumuSkaits) << " EURO" << std::endl;
}
