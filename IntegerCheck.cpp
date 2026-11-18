#include <iostream>
#include <string>
using namespace std;

int main()
{
    int digit;
    cout << "Enter an integer between 5 and 10:" << endl;
    cin >> digit;   

    
    if (!(cin >> digit)) {
        cout << "Sorry, you entered an invalid number." << endl;
    }
    else if(digit >= 5 && digit <= 10) 
    {
        cout << "Your input value ("<< digit<< ") has been accepted." << endl;
    } 
    else if ( digit < 5|| digit > 10) 
    {
        cout << "You entered "<< digit<<". Please enter a value between 5 and 10." << endl;
    }
   /*else 
    {
        cout << "Sorry, you entered an invalid number. Please try again." << endl;
    }*/

}