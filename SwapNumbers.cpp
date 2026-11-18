#include <iostream>
using namespace std;
/* void SwapNumbers(int& varA, int& varB){
        int temp = varA;
        varA = varB;
        varB = temp;
    }*/
   void SwapNumbers(int* varA, int* varB){
        int temp = *varA;
        *varA = *varB;
        *varB = temp;
    }
int main(){
    int varA = 25;
    int varB =100;
    int *ptrA = &varA;
    int *ptrB = &varB;
    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;
  
    SwapNumbers(ptrA, ptrB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;    
    return 0;

}