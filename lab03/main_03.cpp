#include "List.h"
#include <iostream>
using namespace std;
int main()
{
    List list1;
    for(int i = 0; i < 10; ++i){
        list1.insertFirst(i);
        list1.print();
    }
    if(list1.exists(4)){
        cout<<"A megadott ertek benne van a listaban!"<<endl;
    }
    else{
        cout<<"A megadott ertek nincs benne a listaban!"<<endl;
    }
    return 0;
}
