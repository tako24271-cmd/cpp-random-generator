#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream Myfile("examplefile.txt");
    Myfile.close();
    return 0;
}