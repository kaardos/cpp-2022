//
// Created by kardos on 17.11.2022.
//

#ifndef CPP_2022_MANAGER_H
#define CPP_2022_MANAGER_H
#include "Alkalmazott.h"

class Manager: public Alkalmazott{
public:
    Manager(string vNev, string kNev, int szEv, string mKor): Alkalmazott(vNev,kNev,szEv,mKor){};
    void addAlkalmazott(Alkalmazott* alkalmazott);
    void deleteAlkalmazott(Alkalmazott* alkalmazott);
    virtual void print(ostream& os)const;
    static const string MANAGER_MUNKAKOR;

};

#endif //CPP_2022_MANAGER_H
