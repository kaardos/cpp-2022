#include "List.h"
#include <iostream>
using namespace std;
List::List(){
    cout<<"Konstruktor"<<endl;
    this->first = nullptr;
}

void List::insertFirst(int d){
    /*Node * temp = new Node(d,first);
    first = temp;*/
    this->first = new Node(d,first);
    nodeCounter++;
}
int List::removeFirst() {
    int deleted = this->first->value;
    this->first = this->first->next;
    nodeCounter--;
    return deleted;
}


void List::print() const{
    cout<<"[";
    for(Node * ptr = this->first; ptr != nullptr; ptr = ptr->next){
        cout<<ptr->value<<" ";
    }
    cout<<"]"<<endl;
}

List::~List(){
    cout<<"Destruktor"<<endl;
    /*Node * act = this->first;
    while(act != nullptr){
        Node * temp = act;
        act = act->next;
        delete temp;
    }*/

    while(first != nullptr){
        Node * temp = first;
        first = first->next;
        delete temp;
    }

}

bool List::exists(int d) const {
    for(Node * ptr = this->first; ptr != nullptr; ptr = ptr->next){
        if( ptr->value == d){
            return true;
        }
    }
    return false;
}

int List::size() const {

    return nodeCounter;
}

bool List::empty() const {
    if(this->first == nullptr)
    {
        return true;
    }
    return false;
}

void List::remove(int d, List::DeleteFlag df) {
    switch(df){
        case DeleteFlag::LESS  : {
            Node * temp = this->first;
            Node * temp2 =
            while (temp != nullptr){

            }
            break;
        }
        case DeleteFlag::EQUAL : {

            break;
        }
        case DeleteFlag::GREATER : {

            break;
        }

    }
}

