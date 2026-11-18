#include <iostream>
using namespace std;
 
 
 int main() {
    //declare and initialise a pointer so that it doesn't have a random address
    int* pPointer =nullptr;
    int integerVar = 5;
    // assign pointer to address of object
    pPointer = &integerVar;
    //output the value of the integer
    cout<< "integerVar: "<< integerVar<< endl;
    //output the address assigned to the pointer
    cout << "pPointer: "<< pPointer << endl;
    //output thge address of pPointer
    cout<< "address of pPointer "<< &pPointer<<endl;
    return 0;
 }