#include <iostream>
#include "Alkalmazott.h"
int main() {
    Szemely sz_1("Kardos","Tamas",1997);
    sz_1.print(cout);
    cout<<sz_1;
    Alkalmazott al_1("Kardos","Nora",2002,"testver");
    cout<<al_1;
    return 0;
}