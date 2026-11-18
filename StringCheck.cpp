#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    vector<string> elements = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    char focus = 'B';
     for (int i = 0; i <= 8; i++) {
        if (elements[i][0] == focus) {
            cout << elements[i]<< endl;
        }
    }

    return 0;
}