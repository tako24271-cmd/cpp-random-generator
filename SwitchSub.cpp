#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main()
{
   
    auto currentTime = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(static_cast<unsigned int>(currentTime)); 

    uniform_int_distribution<> distr(1, 11); 

    int daysUntilExpiration = distr(gen);
    cout<< daysUntilExpiration << endl;
    
    switch (daysUntilExpiration)
    {
    case 0:
        cout << "Your subscription has expired" << endl;
        break;
    
    case 1:
        cout << "Your subscruiption expires within a day \n Renew now and save 20%!" << endl;
        break;
    case 2:
        cout << "Your subscription ends in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" <<endl;
        break;
    case 3:
        cout << "Your subscription ends in " << daysUntilExpiration <<" days"<< endl;   
         break;
    case 4:
       cout << "Your subscription ends in " << daysUntilExpiration <<" days"<< endl;
       cout << "Renew now and save 10%!" <<endl;
         break;
    case 5:
        cout<<"Your subscription ends in " << daysUntilExpiration <<" days"<< endl;
        cout << "Renew now and save 10%!" <<endl;
        break;
    case 6:
         cout << "Your subscription ends soon. Renew now!" << endl;
         break;
    case 7:
         cout << "Your subscription ends soon. Renew now!" << endl;
         break;
    case 8:
         cout << "Your subscription ends soon. Renew now!" << endl;
         break;
    case 9:
         cout << "Your subscription ends soon. Renew now!" << endl;
         break;
    case 10:
        cout << "Your subscription ends soon. Renew now!" << endl;
         break;
    case 11:
        cout << "You still have subscription!" << endl;
        break;
    }
        
    return 0;
}