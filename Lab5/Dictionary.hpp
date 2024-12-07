#include <iostream>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

class Dictionary {
private:
    unordered_map<string, string> words;
public:
    Dictionary(){}

    void addWord(const string &word, const string &translation){
        words[word] = translation;
    }

    void deleteWord(const string &word) {
        words.erase(word);
    }

    void showDictionary() {
        cout << "Slownik:" << endl;
        for(pair<string, string> p : words){
            cout << p.first << " - " << p.second << endl;
        }
    }

    void showTranslation(const string &word){
        if(words.count(word)) {
            cout << "Tlumaczenie " << word << " - " << words[word] << endl;
        } else {
            cout << "Brak tlumaczenia" << endl;
        }
    }

    void showDictionaryByTranslation() {
        cout << "Slownik wedlug tlumaczenia:" << endl;
        vector<pair<string,string>> vec;
        for(auto &it : words){
            vec.push_back(it);
        }
        sort(vec.begin(), vec.end(), comp);

        for(pair<string, string> p : vec){
            cout << p.first << " - " << p.second << endl;
        }
    }

    bool static comp(pair<string, string> a, pair<string, string> b){
        return a.second < b.second;
    }
};