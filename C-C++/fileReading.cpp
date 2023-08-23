#include <iostream>
#include <string>

using namespace std;

int main() {
    string dosyaAdi;
    cout << "Dosya adini girin: ";
    cin >> dosyaAdi;

    size_t noktaIndis = dosyaAdi.find_last_of(".");
    if (noktaIndis != string::npos) {
        string dosyaUzantisi = dosyaAdi.substr(noktaIndis + 1);
        cout << "Dosya formati: " << dosyaUzantisi << endl;
    } else {
        cout << "Dosya formati bulunamadi." << endl;
    }

    return 0;
}