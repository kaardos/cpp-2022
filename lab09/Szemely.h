//
// Created by kardos on 16.11.2022.
//

#ifndef CPP_2022_SZEMELY_H
#define CPP_2022_SZEMELY_H
#include <string>
#include <iostream>
using namespace std;

class Szemely{
protected:
    string vezetekNev;
    string keresztNev;
    int szuletesiEv;
public:
    Szemely(string vNev, string kNev, int szEv) : vezetekNev(vNev), keresztNev(kNev), szuletesiEv(szEv){};
    virtual void print(ostream&)const;
};
ostream& operator << (ostream& os, const Szemely& szemely);
#endif //CPP_2022_SZEMELY_H
