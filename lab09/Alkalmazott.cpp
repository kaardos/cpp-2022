//
// Created by kardos on 16.11.2022.
//
#include "Alkalmazott.h"
int Alkalmazott::counter{0};

void Alkalmazott::print(ostream &os) const {
    Szemely::print(os);
    os<<", Munkakor: "<<munkakor<<", Id: "<<id;
}

int Alkalmazott::getID() {
    return id;
}
