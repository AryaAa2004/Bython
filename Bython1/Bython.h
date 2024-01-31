#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

#ifndef REALLY_LAST_BYTHON_H
#define REALLY_LAST_BYTHON_H

namespace std {

    class Bython {
    private:
        map<string, int> (*list) = new map<string ,int>();
        vector<string> vec;
        static int numVorood;

    public:
        bool isNumber(const std::string &str);
        bool isContain(const string& str2);
        void inserting(const string& vorod,const int x);
        void meghdar(string &x);
        void agar(string &x);
        void voroodi(string &x);
        void khorooji(string &x);
        void divider(string &x);
        void getVal();
        Bython(vector<std::string> vec);
    };

} // std

#endif //REALLY_LAST_BYTHON_H
