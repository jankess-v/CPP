#ifndef LAB4_CITY_H
#define LAB4_CITY_H
#include <vector>
#include <unordered_map>
#include "Citizen.h"

using namespace std;

class City {
private:
    vector<Citizen> citizens;
    string city_name;
public:
    City(){
        city_name = "Lublin";
    }
    City(string city){
        this->city_name = city;
    }

    void addCitizen(Citizen osoba){
        citizens.push_back(osoba);
    }

    void deleteCitizen(string surname, int age){
        for(int i = 0; i < citizens.size(); i++){
            if(citizens[i].getSurname() == surname && citizens[i].getAge() == age){
                citizens.erase(citizens.begin() + i);
            }
        }
    }

    void showCitizens(){
        for(Citizen c : citizens) {
            c.show();
            cout << endl;
        }
    }

    void showCity(){
        cout << city_name << endl;
    }

    string getCity(){
        return city_name;
    }

    int women(){
        int counter = 0;
        for(int i = 0; i < citizens.size(); i++){
            if(citizens[i].getSex() == 'K'){
                counter++;
            }
        }
        return counter;
    }

    int city_citizens(){
        return citizens.size();
    }

    int adults(){
        int counter = 0;
        for(Citizen c : citizens)
            if(c.getAge() >= 18){
                counter++;
            }
        return counter;
    }

    int postal_codes(){
        unordered_map<string, int> postal_code_count;
        for(Citizen c : citizens){
            postal_code_count[c.getPostal_code()]++;
        }
        for(auto [postal_code, count] : postal_code_count){
            cout << postal_code << " -> " << count << " mieszkancow" << endl;
        }
        return postal_code_count.size();
    }

    Citizen getCitizen(int i) {
        return citizens[i];
    }

    bool operator() (City &c1, City &c2) {
        return c1.city_citizens() < c2.city_citizens();
    }
};


#endif //LAB4_CITY_H
