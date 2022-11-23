//
// Created by kardos on 16.11.2022.
//

#ifndef CPP_2022_ALKALMAZOTT_H
#define CPP_2022_ALKALMAZOTT_H

#include "Szemely.h"

class Alkalmazott:public Szemely{
protected:
    int id;
    string munkakor;
    static int counter;
    Alkalmazott *alk;
public:
    Alkalmazott(string vNev, string kNev, int szEv,string mKor):Szemely(vNev,kNev,szEv),munkakor(mKor),id(counter++){};
    virtual void print(ostream& os)const;
    int getID();
};
#endif //CPP_2022_ALKALMAZOTT_H
