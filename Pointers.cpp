#include <iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
     int* pPointer = nullptr;
     //assign the pointer the address of firstvalue
     pPointer = &firstvalue;
     *pPointer = 10; //inddirection
     cout << "firstvalue is: "<<firstvalue <<'\n';
     cout <<"secondvalue is: " << secondvalue<<'\n';
     return 0;


     

     
}