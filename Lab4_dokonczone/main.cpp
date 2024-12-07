#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>
#include "City.h"
#include "Citizen.h"
using namespace std;
void losowanie();
void print(int &el);
template<typename T>
void printVector(vector<T> vec);
void the_most(vector<City> c, int mode);
void statistic(vector<City> c);
void sort_cities(vector<City> &c);
void showCities(const vector<City> &c);
bool liczbaCyfr(int a, int b);

struct funktorLiczbaCyfr{
    bool operator()(int a, int b){
        return liczbaCyfr(a, b);
    }
};

int main() {
    //Zad2
    // losowanie();

    //Zad3
    City city("Moskwa");
    City city1("Lublin");
//     Dodanie kilku mieszkańców
    city.addCitizen(Citizen("John", "Doe", "20-389", 25, 'M'));
    city.addCitizen(Citizen("Jakub", "Jankowski", "20-389",30, 'M'));
    city.addCitizen(Citizen("Ania", "Zielona", "30-678" ,20, 'K'));
    city.addCitizen(Citizen("Robert", "Burneika", "20-235", 45, 'M'));
    city1.addCitizen(Citizen("Robert", "Maklowicz", "11-235", 65, 'M'));
    city1.addCitizen(Citizen("Adam", "Malysz", "11-235", 23, 'M'));

    // Wyświetlenie mieszkańców
    city.showCity();
    city.showCitizens();
    city1.showCity();
    city1.showCitizens();

    // Wyświetlenie liczby kobiet, pełnoletnich mieszkańców i statystyki kodów pocztowych
    cout << "Liczba kobiet: " << city.women() << endl;
    cout << "Liczba mieszkancow: " << city.city_citizens() << endl;
    cout << "Liczba pelnoletnich mieszkancow: " << city.adults() << endl;
    cout << "Kody pocztowe:\n" << city.postal_codes() << endl;

    // Usunięcie mieszkańca
    city.deleteCitizen("Doe", 25);

    vector<City> cities;
    cities.push_back(city);
    cities.push_back(city1);
    showCities(cities);
    sort_cities(cities);
    showCities(cities);
//    printVector(cities);

    srand(time(NULL));
    vector<int> vec {1,6,21,36,11,123,94,5,111};
    random_shuffle(vec.begin(), vec.end());
    for(auto it = vec.begin(); it < vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    //Rosnąco
    std::sort(vec.begin(), vec.end());
    for_each(vec.begin(), vec.end(), print);
    cout << endl;
    //Malejaco
    std::sort(vec.begin(), vec.end(), greater<int>());
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    //Według liczby cyfr
    cout << "Liczba cyfr" << endl;
    std::sort(vec.begin(), vec.end(), liczbaCyfr);
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    //Lambda
    std::sort(vec.begin(), vec.end(), [](int a, int b){
        return liczbaCyfr(a, b);
    });
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    //Funktor
    std::sort(vec.begin(), vec.end(), funktorLiczbaCyfr());
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    //Lambda nazwana
    auto lambda = [](int a, int b){
        return liczbaCyfr(a, b);
    };
    std::sort(vec.begin(), vec.end(), lambda);
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

bool liczbaCyfr(int a, int b) {
    int n1 = 0, n2 = 0;
    while(a > 0){
        a /= 10;
        n1++;
    }
    while(b > 0){
        b /= 10;
        n2++;
    }
    return n1 < n2;
}

void losowanie(){
    int n;
    srand(time(NULL));
    n = rand() % 16 + 5;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int x = rand() % 200 - 100;
        if(x >= 0){
            arr.insert(arr.begin(), x);
        } else{
            arr.push_back(x);
        }
    }

    cout << "Iterator:" << endl;
    vector<int>::iterator it;
    for(it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << "For_each" << endl;
    for_each(arr.begin(), arr.end(), print);
    cout << endl <<  "For z auto" << endl;
    for(auto i : arr){
        cout << i << " ";
    }
}

void print(int &el) {
    cout << el << " ";
}

//template<typename T>
//void printVector(vector<T> vec) {
//    for(T i : vec) {
//        cout << i << " ";
//    }
//    cout << endl;
//}

void showCities(const vector<City> &c){
    for(City city : c){
        city.showCity();
    }
    cout << endl;
}

void the_most(vector<City> c, int mode) {
    if(mode == 1) {
        City city = c[0];
        int max = c[0].postal_codes();
        for(int i =1; i < c.size(); i++) {
            if(c[i].postal_codes() > max) {
                max = c[i].postal_codes();
                city = c[i];
            }
        }
        cout << "Miasto w którym jest najwięcej kodów pocztowych: ";
        city.showCity();
    }
    else if(mode == 2) {
        City city = c[0];
        int max = c[0].city_citizens();
        for(int i = 1; i < c.size(); i++) {
            if(c[i].city_citizens() > max) {
                max = c[i].city_citizens();
                city = c[i];
            }
        }
        cout << "Miasto z najwieksza liczba mieszkancow: ";
        city.showCity();
    }
    else if(mode == 3) {
        Citizen citizen = c[0].getCitizen(0);
        int minWiek = citizen.getAge();
        for(int j = 0; j < c.size(); j++) {
            for(int i = 1; i < c[j].city_citizens(); i++) {
                if(c[j].getCitizen(i).getAge() < minWiek) {
                    minWiek = c[j].getCitizen(i).getAge();
                    citizen = c[j].getCitizen(i);
                }
            }
        }
        cout << "Najmlodszy mieszkaniec wsrod miast:";
        citizen.show();
    }
}

void statistic(vector<City> c) {
    for(City city : c) {
        city.showCity();
        city.city_citizens();
        cout << "Kobiety: " << city.city_citizens()  - city.women()<< endl;
        cout << "Mezczyzni: " << city.city_citizens()  - city.women()<< endl;
        cout << "Pelnoletni: " << city.adults() << endl;
        cout << "Niepelnoletni: " << city.city_citizens() - city.adults() << endl;
    }
}

void sort_cities(vector<City> &c) {
    sort(c.begin(), c.end(), [](City c1, City c2){
        return c1.city_citizens() < c2.city_citizens();
    });
}