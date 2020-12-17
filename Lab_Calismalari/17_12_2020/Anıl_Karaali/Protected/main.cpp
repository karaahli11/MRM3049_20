#include <iostream>

using namespace std;

class Otomobil {
public:
    void setModel(string oModel);
    string getModel();

    void setMarka(string oMarka);
    string getMarka();
protected:
    string Marka;
    string Model;

};
void Otomobil::setMarka(string oMarka) {
    Marka = oMarka;
}

string Otomobil::getMarka() {
    return Marka;
}
void Otomobil::setModel(string oModel) {
    Model = oModel;
}
string Otomobil::getModel() {
    return Model;
}
class Otobus :public Otomobil {
public:
    Otobus() {
        cout << "Otobus özellikleri yazdırılıyor..." << endl;
    }

};

int main() {

    Otobus Van;
    Van.setMarka("Mercedes");
    Van.setModel("Vito");

    cout << "Otobus adi :" << Van.getMarka()<< endl;
    cout << "Otobus adi :" << Van.getModel()<< endl;
    return 0;
}
