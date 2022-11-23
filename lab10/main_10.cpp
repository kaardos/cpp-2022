#include <iostream>
#include "OrderedList.h"
using namespace std;

struct Person {
    string fname;
    string lname;
    Person(string fname = "", string lname = "") : fname(fname), lname(lname) {}
};
ostream &operator<<(ostream &os, const Person &p) {
    os << p.fname << " " << p.lname << " ";
    return os;
}
struct PersonLess{
    bool operator()( const Person& p1, const Person& p2){
        if( p1.fname == p2.fname )
            return p1.lname < p2.lname;
        return p1.fname < p2.fname;
    }
};
struct PersonEqual {
    bool operator()(const Person &p1, const Person &p2) {
        return (p1.fname == p2.fname) && (p1.lname == p2.lname);
    }
};

int main() {
    OrderedList<int> l;
    for( int i = 0; i < 30; ++i){
        int v = rand() % 100;
        cout << v << " ";
        l.insert(v);
    }
    cout << endl;
    l.listElements(cout);
    cout << endl;

    OrderedList<Person, PersonLess, PersonEqual> pl;
    pl.insert(Person("Balazs", "Istvan"));
    pl.insert(Person("Andras", "Eva"));
    pl.insert(Person("Balazs", "Emoke"));
    pl.insert(Person("Petres", "Andras"));
    cout << "Persons: ";
    pl.listElements(cout);
    cout << endl;
    return 0;
}