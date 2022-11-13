#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //1.feladat
    cout << "1. feladat" << endl;
    vector<string> fruits{
        "melon", "strawberry", "raspberry","apple", "banana", "walnut", "lemon"
    };
    string what_to_find = "berry";
    auto result1 = find_if(fruits.begin(),fruits.end(),[&what_to_find](const string& e){
        return e.contains(what_to_find);
    });
    cout << "Result:" << *result1 << endl;

    //2.feladat
    cout << endl << "2. feladat" << endl;
    vector<int> v = {1,2,3,4,5};

    for_each(v.begin(),v.end(),[](const int& e) {

        cout << e << " " << endl;
    });
    generate(v.begin(), v.end(), [n = 0] () mutable { return n+=2; });
    cout << endl << "n+2-re tesztelve" << endl;
    for_each(v.begin(),v.end(),[](const int& e){
        cout << e << " " << endl;
    });
    auto result2 = all_of(v.begin(),v.end(),[](const int& e){
       return e%2 == 0;
    });
    cout << (result2 ? "Mind paros" : "Nem mind paros") << endl;
    //ha result2 igaz -> akkor mind paros, maskepp nem mind paros

    //3.feladat
    cout << endl << "3. feladat" << endl;
    vector<int> x = {1,2,3,4,5};

    for_each(x.begin(),x.end(),[](int& e) {
        e*=2;
        cout << e << " " << endl;
    });

    //4.feladat
    cout << endl << "4.feladat:" << endl;
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    auto result4 = count_if(months.begin(),months.end(),[](const string& e){
        return e.size() == 5;
    });
    cout << result4 << " " << endl;

    //5.feladat
    cout << endl << "5.feladat" << endl;
    vector<double> arr{ 13, 90, 99, 5, 40, 80 };
    std::sort(arr.begin(), arr.end(), greater<double>());
    for_each(arr.begin(),arr.end(),[](int e){
        cout << e << " ";
    });
    cout << endl;

    //6.feladat
    cout << endl << "6.feladat" << endl;
    vector < pair <string , double > >  honapok {
            make_pair("January",-4.5),
            make_pair("February",5.9),
            make_pair("March",14.1),
            make_pair("April",20.0),
            make_pair("May",23.4),
            make_pair("June",27.7),
            make_pair("July",34.2),
            make_pair("August",36.9),
            make_pair("September",20.1),
            make_pair("October",15.2),
            make_pair("November",10.6),
            make_pair("December",2.1)
    };
    std::sort(honapok.begin(),honapok.end(),[](const pair<string, double>& a,
                                                              const pair<string, double>& b){
        return (a.second < b.second) ;
    });
    for(const pair<string, double> e: honapok){
        cout << e.first << " honapban ennyi volt az atlaghomerseklet : " << e.second << endl;
    }

    //7.feladat
    cout << endl << "7.feladat" << endl;
    vector <double> valos = { 15723.31, 9.23, 57.44, -37.2, -2.0, 3.62, -167.66, 81.31, -888.12};
    std:sort(valos.begin(),valos.end(), [](const double& a, const double& b){
        return (abs(a) < abs(b));
    });
    for_each(valos.begin(),valos.end(),[](const double& x){
        cout << x << " ";
    });

    //8.feladat
    cout << endl << endl << "8.feladat" << endl;
    std::for_each(months.begin(),months.end(), [](string& m){
        std::for_each(m.begin(),m.end(), [](char& s){
            s = std::tolower(static_cast<unsigned char>(s));
        });
        std::cout << quoted(m) << endl;
    });

    return 0;
}