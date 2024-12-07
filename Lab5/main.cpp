#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include "Dictionary.hpp"

using namespace std;

void print(int &i) {
    cout << i << " ";
}

bool sumaCyfr(int a, int b) {
    int sum1 =0 , sum2 = 0;
    while(a > 0) {
        int temp = a % 10;
        a = a / 10;
        sum1 += temp;
    }
    while(b > 0) {
        int temp = b % 10;
        b = b / 10;
        sum2 += temp;
    }
    return sum1 < sum2;
}

bool liczbaCyfr(int a, int b) {
    int l1 = 0, l2 = 0;
    while(a > 0) {
        a /= 10;
        l1++;
    }
    while(b > 0) {
        b /= 10;
        l2++;
    }
    return l1 > l2;
}

pair<int, int> duplikat(vector<int> v) {
    pair<int, int> p;
    int sum = 0;
    set<int> s;
    for(auto it = v.begin(); it != v.end(); it++) {
        if(s.size() != 0 && s.contains(*it)) {
            p.first = *it;
            sum -= *it;
        } else {
            sum += *it;
            s.insert(*it);
        }
    }
    p.second = sum;
    return p;
}

template<typename T>
void alternatywaWykluczajaca(set<T> s1, set<T> s2) {
    //Funkcja powinna wyświetlić sumę elementów, które znajdują się
    //tylko w pierwszym lub tylko w drugim zbiorze
    //set_union(set_difference(A,B),set_difference(B,A))
    //lub po prostu set_symmetric_difference()
    set<T> v;
    set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(v, v.begin()));
    for(auto e : v) {
        cout << e << " ";
    }
    cout << endl;
}

char roznica(string s1, string s2) {
    map<char, int> map1;
    map<char, int> map2;
    for(int i = 0; i < s1.size(); i++){
        map1[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++){
        map2[s2[i]]++;
    }
    for(const auto &pair2 : map2){
        if(map1.contains(pair2.first) == 0){
            return pair2.first;
        }
    }
    return 0;
}

int main() {
     vector<int> v = {5, 4 ,67, 123, 333, 52, 11, 77};
     cout << "Suma cyfr:" << endl;
     sort(v.begin(), v.end(), sumaCyfr);
     for_each(v.begin(), v.end(), [](int i) {
         cout << i << " ";
     });

     cout << endl <<"Liczba cyfr:" << endl;
     sort(v.begin(), v.end(), liczbaCyfr);
     for_each(v.begin(), v.end(), [](int i) {
         cout << i << " ";
     });

     cout << endl << "Iterator:" << endl;
     sort(v.begin(), v.end());
     for_each(v.begin(), v.end(), [](int i) {
         cout << i << " ";
     });

     cout << endl << "Lambda:" << endl;
     sort(v.begin(), v.end(), [](int a, int b) {
         return a < b;
     });
     for_each(v.begin(), v.end(), [](int i) {
         cout << i << " ";
     });

    //ZAD1
    vector<int> v2 = {1 ,5 ,3 ,7, 5, 2, 6};
    for_each(v2.begin(), v2.end(), print);
    cout << endl;
    auto para = duplikat(v2);
    cout << "Wartosc zduplikowana: " << para.first << "\nSuma unikatowych elementow: " << para.second << endl;
    //ZAD2
    set<int> s1 = {1, 2, 3, 4};
    set<int> s2 = {3, 4, 5, 6};
    alternatywaWykluczajaca(s1, s2);
    //ZAD3
    cout << "Dodany znak: " << roznica("abcd", "bdcan") << endl;
    //ZAD4
    Dictionary *dict = new Dictionary();
    dict->addWord("kurtka", "jacket");
    dict->addWord("chleb", "bread");
    dict->addWord("podkladka", "mousepad");
    dict->showDictionary();
    dict->deleteWord("chleb");
    dict->showDictionaryByTranslation();

    return 0;
}
