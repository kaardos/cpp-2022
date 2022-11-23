//
// Created by kardos on 16.11.2022.
//
#include "Szemely.h"



void Szemely::print(ostream & os)const  {
    os<<endl<<"Vezeteknev:"<<vezetekNev<<", ";
    os<<"Keresztnev:"<<keresztNev<<", ";
    os<<"Szuletesi ev:"<<szuletesiEv;
}

ostream &operator<<(ostream & os, const Szemely& szemely) {
    szemely.print(os);
    return os;
}
