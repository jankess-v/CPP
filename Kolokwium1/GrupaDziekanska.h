#ifndef KOLOKWIUM1_GRUPADZIEKANSKA_H
#define KOLOKWIUM1_GRUPADZIEKANSKA_H
#include <map>
#include <iostream>
#include <string>
using namespace std;

class GrupaDziekanska {
private:
    map<string, string> grupa = {{"anna.nowak@gmail.com", "1100"},
                                 {"s54321@pollub.edu.pl", "1101"},
                                 {"s99999@pollub.edu.pl", "1100"},
                                 {"s12345@pollub.edu.pl", "1001"},
                                 {"s55555@pollub.edu.pl", "1002"},
                                 {"jan.kowalski@gmail.com", "1010"},
                                 {"s11111@pollub.edu.pl", "1010"},
                                 };
public:
    void wyswietlGrupe(){
        cout << "Grupa dziekanska:" << endl;
        for(auto [email, index] : grupa){
            cout << email << " - " << index << endl;
        }
    }

    pair<string, string> findKlucz(string klucz){
        auto it = grupa.find(klucz);
        pair<string, string> p("brak klucza", "-");
        if(it != grupa.end()) {
            p.first = it->first;
            p.second = it->second;
        } else {
            cout << "Nie znaleziono podanego klucza" << endl;
        }
        return p;
    }

    void szukajWartosc(string value){
        cout << "Wyszukane wartosci dla "<< value << ":" << endl;
        for(auto [email, index] : grupa){
            if(index == value){
                cout << email << " - " << index << endl;
            }
        }
    }
};

#endif //KOLOKWIUM1_GRUPADZIEKANSKA_H
