#include <iostream>
#include "calisan.h"

using namespace std;

//construction kýsmý
C::C(string calisanad, string calisansoyad, int calisanyas, double calisanmaas) {
    this->calisanad = calisanad;
    this->calisansoyad = calisansoyad;
    this->calisanyas = calisanyas;
    this->calisanmaas = calisanmaas;
}

//Set Get fonksiyonlarý kýsmý
void C::setAd(string calisanad) {
    this->calisanad = calisanad;
}

string C::getAd() const {
    return calisanad;
}

void C::setSoyad(string calisansoyad) {
    this->calisansoyad = calisansoyad;
}

string C::getSoyad() const {
    return calisansoyad;
}

void C::setYas(int calisanyas) {
    this->calisanyas = calisanyas;
}

int C::getYas() const {
    return calisanyas;
}

void C::setMaas(double calisanmaas) {
    this->calisanmaas = calisanmaas;
}

double C::getMaas() const {
    return calisanmaas;
}


//operatörleri aþýrý yükleme kýsmý
bool C::operator==(const C& c) const {
    return (calisanad == c.calisanad && calisansoyad == c.calisansoyad && calisanyas == c.calisanyas && calisanmaas == c.calisanmaas);
}
C& C::operator+=(double mik) {
    calisanmaas += mik;
    return *this;
}
C& C::operator-=(double mik) {
    calisanmaas -= mik;
    return *this;
}
C& C::operator*=(double orn) {
    calisanmaas *= orn;
    return *this;
}

int main() {
    string calisanad, calisansoyad;
    int calisanyas;
    double calisanmaas, miktar, oran;

    //verileri alan kýsým
    cout << "Musteri adini girin: ";
    cin >> calisanad;
    cout << "Musteri soyadini girin: ";
    cin >> calisansoyad;
    cout << "Musteri yasini girin: ";
    cin >> calisanyas;
    cout << "Musteri maasini girin: ";
    cin >> calisanmaas;
    
    // m1 ve m2 için sýnýflar oluþturup verileri giriyor (yanlýþ anlatmýþ olabilirim)
    C calisan1(calisanad, calisansoyad, calisanyas, calisanmaas);
    C calisan2("bahadir", "acuner", 26, 1100);
    
    //operatörleri deneyen kýsým
    cout << "Verilen avans: ";
    cin >> miktar;
    calisan1 -= miktar;
    cout << "Ekstra verilecek para: ";
    cin >> miktar;
    calisan1 += miktar;
    cout << "Yapilacak zam orani: ";
    cin >> oran;
    calisan1 *= oran;
    cout << "Son maas: " << calisan1.getMaas() << endl;
    
    //== test eden kýsým
    if (calisan1 == calisan2) {
        cout << "girdiginiz veriler dogru" << endl;
    } else {
        cout << "girdiginiz veriler yanlis" << endl;
    }

    return 0;
}
