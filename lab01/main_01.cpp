#include "functions.h"
#include <iostream>
using namespace std;

void test_function1();
void test_function2();
void test_function3();
void test_function4();
void test_function5();
void test_function6();
void test_function7();
int main(){
    //test_function1();
    //test_function2();
    //test_function3();
    //test_function4();
    //test_function5();
    //test_function6();
    test_function7();
    return 0;
}

void test_function1(){
    for(int i=0; i<128; ++i){
        cout << i << ":" << countBits(i)<<endl;
    }
}
void test_function2(){
    for (int i = 0; i < 35; ++i) {
        int n = 0;
        if(setBit(n, i)){
            cout<<i<<" ---> " << n <<endl;
        }else{
            cout<<"Impossible operation!" << endl;
        }
    }
}
void test_function3(){
    int i, n;
    double arr[] = { 14.21, 5.29, 17.84};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"A tomb atlaga:"<<mean(arr,n);

}
void test_function4(){
    int n;
    double arr[] = { 14.21, 5.29, 17.84};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"A tomb szorasa:"<<stddev(arr,n);
}
void test_function5(){
    int n;
    double arr[] = { 14.21, 5.29, 17.84, 99.12, -71.01, 0};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<max2(arr,n).first<<","<<max2(arr,n).second<<endl;
}
void test_function6(){
    istringstream iss("1 2 3 alma 4");
    string bemenet;
    double sum = 0;
    double number;
    while(iss >> bemenet){
        istringstream aux(bemenet);
        aux >> number;
        sum += number;
    }
    cout<<sum;
}
void test_function7(){
    cout<<"Ennyi szobol all a szoveg: "<<countWords("Alma a fa alatt")<<endl;
}